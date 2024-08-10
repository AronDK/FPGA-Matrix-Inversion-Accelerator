#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct wav_header_s {
    char     chunk_id[4];
    uint32_t chunk_size;
    char     format[4];
    char     subchunk1_id[4];
    uint32_t subchunk1_size;
    uint16_t audio_format;
    uint16_t num_channels;
    uint32_t sample_rate;
    uint32_t byte_rate;
    uint16_t block_align;
    uint16_t bits_per_sample;
    char     subchunk2_id[4];
    uint32_t subchunk2_size;
} wav_header_t;

void print_wav_header(wav_header_t *header) {
    printf("Chunk ID: %.4s\n", header->chunk_id);
    printf("Chunk Size: %u\n", header->chunk_size);
    printf("Format: %.4s\n", header->format);
    printf("Subchunk 1 ID: %.4s\n", header->subchunk1_id);
    printf("Subchunk 1 Size: %u\n", header->subchunk1_size);
    printf("Audio Format: %u\n", header->audio_format);
    printf("Number of Channels: %u\n", header->num_channels);
    printf("Sample Rate: %u\n", header->sample_rate);
    printf("Byte Rate: %u\n", header->byte_rate);
    printf("Block Align: %u\n", header->block_align);
    printf("Bits per Sample: %u\n", header->bits_per_sample);
    printf("Subchunk 2 ID: %.4s\n", header->subchunk2_id);
    printf("Subchunk 2 Size: %u\n", header->subchunk2_size);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <WAV file>\n", argv[0]);
        return 1;
    }

    FILE *wav_file = fopen(argv[1], "rb");
    if (!wav_file) {
        fprintf(stderr, "Error opening WAV file\n");
        return 1;
    }

    wav_header_t header;
    if (fread(&header, sizeof(wav_header_t), 1, wav_file) != 1) {
        fprintf(stderr, "Error reading WAV header\n");
        fclose(wav_file);
        return 1;
    }

    print_wav_header(&header);

    fclose(wav_file);
    return 0;
}
