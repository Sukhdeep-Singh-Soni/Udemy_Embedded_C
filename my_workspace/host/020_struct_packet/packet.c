/*
 * packet.c
 *
 *  Created on: Nov 1, 2024
 *      Author: deep
 */

#include <stdio.h>
#include <stdint.h>

struct packet {
	uint8_t  crc;
	uint8_t  status;
	uint16_t payload;
	uint8_t  bat;
	uint8_t  sensor;
	uint8_t  long_addr;
	uint8_t  short_addr;
	uint8_t  addr_mode;
};

int main() {

	uint32_t packet_val;
	struct packet packet;

	printf("Enter the 32-bit packet value (int hex) : ");
	scanf("%x", &packet_val);

	packet.crc = (uint8_t)(packet_val & 0x3);
	packet.status = (uint8_t)((packet_val >> 2) & 0x1);
	packet.payload = (uint8_t)((packet_val >> 3) & 0xfff);
	packet.bat = (uint8_t)((packet_val >> 15) & 0x7);
	packet.sensor = (uint8_t)((packet_val >> 18) & 0x7);
	packet.long_addr = (uint8_t)((packet_val >> 21) & 0xff);
	packet.short_addr = (uint8_t)((packet_val >> 29) & 0x3);
	packet.addr_mode = (uint8_t)((packet_val >> 31) & 0x1);

	printf("crc				:%#x\n", packet.crc);
	printf("status			:%#x\n", packet.status);
	printf("payload			:%#x\n", packet.payload);
	printf("bat				:%#x\n", packet.bat);
	printf("sensor			:%#x\n", packet.sensor);
	printf("long_addr		:%#x\n", packet.long_addr);
	printf("short_addr		:%#x\n", packet.short_addr);
	printf("addr_mode		:%#x\n", packet.addr_mode);

	printf("total size of struct = %lu\n", sizeof(packet));

}



