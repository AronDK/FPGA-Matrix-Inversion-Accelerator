#include "wav.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SAMPLE_RATE 44100
#define DURATION 5
#define FREQUENCY 440.0
#define AMPLITUDE 0.5
#define NUM_CHANNELS 1
#define BITS_PER_SAMPLE 24

int main() {
    uint32_t num_samples = SAMPLE_RATE * DURATION;
    wav_file_t* wav_file = wav_file_create("sine_wave.wav", SAMPLE_RATE, NUM_CHANNELS, BITS_PER_SAMPLE);

    if (wav_file == NULL) {
        fprintf(stderr, "Failed to create WAV file\n");
        return 1;
    }

    int32_t *buffer = (int32_t *)malloc(num_samples * sizeof(int32_t));
    if (buffer == NULL) {
        fprintf(stderr, "Failed to allocate memory for audio data\n");
        wav_file_close(wav_file);
        return 1;
    }

    for (uint32_t i = 0; i < num_samples; ++i) {
        double sample = AMPLITUDE * sin(2.0 * M_PI * FREQUENCY * ((double)i / SAMPLE_RATE));
        buffer[i] = (int32_t)(sample * (INT32_MAX));
    }

    wav_file_write(wav_file, buffer, num_samples);
    wav_file_close(wav_file);

    free(buffer);

    printf("WAV file sine_wave.wav created\n");
    return 0;
}
