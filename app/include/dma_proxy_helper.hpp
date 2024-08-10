/*
 * 		Author: Junning Fan
 *		dma_proxy_helper provides helper class for using DMA facilities managed by Xilinx dma proxy drivers: https://github.com/Xilinx-Wiki-Projects/software-prototypes
 *		This helper class currently only supports one buffer per channel per device
 */

#include <string>
#include <unistd.h>
#include "dma-proxy.h"
#include <fcntl.h>
#include <stdexcept>
#include <sys/mman.h>
#include <sys/ioctl.h>

#include <chrono>

namespace dmaProxy{
	class DMAProxy {
	public:
		DMAProxy() = delete;
		DMAProxy(std::string rxDevice, std::string txDevice);
		~DMAProxy();
		channel_buffer::proxy_status startTx(uint32_t length, bool blocking = true);
		channel_buffer::proxy_status startRx(uint32_t length, bool blocking = false);
		channel_buffer::proxy_status getTxStatus();
		channel_buffer::proxy_status getRxStatus();
		unsigned int* getTxBuffer();
		unsigned int* getRxBuffer();
		channel_buffer::proxy_status waitTx();
		channel_buffer::proxy_status waitRx();

		struct channel_buffer *buf_ptr;
		int rx_fd = -1;
		int tx_fd = -1;
		pthread_t tid;
		channel_buffer *rx_channel_buffer, *tx_channel_buffer;
	private:
	};
}
