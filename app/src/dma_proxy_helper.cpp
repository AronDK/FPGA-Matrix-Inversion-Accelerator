#include "dma_proxy_helper.hpp"

using namespace dmaProxy;

DMAProxy::DMAProxy(std::string rx_device, std::string tx_device) {
	this->rx_fd = open(rx_device.data() , O_RDWR);
	if(this->rx_fd < 1) {
		throw std::invalid_argument("unable to open rx channel character device!\r\n");
	}
	this->rx_channel_buffer = (struct channel_buffer *)mmap(NULL, sizeof(struct channel_buffer) * 1,
			PROT_READ | PROT_WRITE, MAP_SHARED, rx_fd, 0);
	if(this->rx_channel_buffer == MAP_FAILED) {
		close(rx_fd);
		throw std::invalid_argument("rx channel character device mmap failed!\r\n");
	}
	printf("DMA RX buf addr %x.\n", (uint64_t)this->rx_channel_buffer);
	printf("DMA RX buf length %d.\n", this->rx_channel_buffer->length);

	this->tx_fd = open(tx_device.data(), O_RDWR);
	if(this->tx_fd < 1) {
		throw std::invalid_argument("unable to open tx channel character device!\r\n");
	}
	this->tx_channel_buffer = (struct channel_buffer *)mmap(NULL, sizeof(struct channel_buffer) * 1,
			PROT_READ | PROT_WRITE, MAP_SHARED, tx_fd, 0);
	if(this->tx_channel_buffer == MAP_FAILED) {
		close(tx_fd);
		throw std::invalid_argument("tx channel character device mmap failed!\r\n");
	}

}

unsigned int* DMAProxy::getRxBuffer() {
	return this->rx_channel_buffer->buffer;
}

unsigned int* DMAProxy::getTxBuffer() {
	return this->tx_channel_buffer->buffer;
}
// single transmission should be longer than AXI DMA buffer size: 4 byte*2^14 = 65536 Bytes
channel_buffer::proxy_status DMAProxy::startTx(uint32_t length, bool blocking) {
	this->tx_channel_buffer->length = length;
	const unsigned int buf_id = 0;
	ioctl(this->tx_fd, START_XFER, &buf_id);
	if (blocking) {
		ioctl(this->tx_fd, FINISH_XFER, &buf_id);
	}
	return this->tx_channel_buffer->status;
}
// single transmission should be longer than AXI DMA buffer size: 4 byte*2^14 = 65536 Bytes
channel_buffer::proxy_status DMAProxy::startRx(uint32_t length, bool blocking) {
	this->rx_channel_buffer->length = length;
	const unsigned int buf_id = 0;
	ioctl(this->rx_fd, START_XFER, &buf_id);
	if (blocking) {
		ioctl(this->rx_fd, FINISH_XFER, &buf_id);
	}
	return this->rx_channel_buffer->status;
}

channel_buffer::proxy_status DMAProxy::waitTx() {
	const unsigned int buf_id = 0;
	ioctl(this->tx_fd, FINISH_XFER, &buf_id);
	return this->tx_channel_buffer->status;
}

channel_buffer::proxy_status DMAProxy::waitRx() {
	const unsigned int buf_id = 0;
	ioctl(this->rx_fd, FINISH_XFER, &buf_id);
	return this->rx_channel_buffer->status;
}

channel_buffer::proxy_status DMAProxy::getTxStatus() {
	return this->tx_channel_buffer->status;
}

channel_buffer::proxy_status DMAProxy::getRxStatus() {
	return this->rx_channel_buffer->status;
}

DMAProxy::~DMAProxy() {
	munmap(rx_channel_buffer, sizeof(struct channel_buffer) * 1);
	munmap(tx_channel_buffer, sizeof(struct channel_buffer) * 1);
	close(rx_fd);
	close(tx_fd);
}
//bool DMAProxy::startRx(uint32_t length, bool blocking = false);
