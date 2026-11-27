/*
 * @Description: Waveshare ESP32-S3-CAN-2CH pin map (adapted)
 */
#pragma once
// CAN B / ESP32-S3 TWAI  →  板载 CAN_1 (IO15/IO16)
#define CAN_TX 15
#define CAN_RX 16
// Shared SPI pins  →  XL2515 (板载 CAN_2)
#define SPI_SCLK 21
#define SPI_MOSI 41
#define SPI_MISO 42
// CAN A / MCP2515
#define MCP2515_CS 17
#define MCP2515_SCLK SPI_SCLK
#define MCP2515_MOSI SPI_MOSI
#define MCP2515_MISO SPI_MISO
#define MCP2515_RST -1
