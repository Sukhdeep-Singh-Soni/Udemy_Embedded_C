/*
 * bit_extraction.c
 *
 *  Created on: Nov 1, 2024
 *      Author: deep
 */

#include <stdio.h>
#include <stdint.h>

union packet {
	uint32_t packetValue;

	struct {
		uint32_t  crc			:2;
		uint32_t  status		:1;
		uint32_t  payload		:12;
		uint32_t  bat			:3;
		uint32_t  sensor		:3;
		uint32_t  long_addr		:8;
		uint32_t  short_addr 	:2;
		uint32_t  addr_mode		:1;
	}packetFields;
};

int main() {

	union packet packet_val;

	printf("Enter the 32-bit packet value (int hex) : ");
	scanf("%x", &packet_val.packetValue);

	printf("crc				:%#x\n", packet_val.packetFields.crc);
	printf("status			:%#x\n", packet_val.packetFields.status);
	printf("payload			:%#x\n", packet_val.packetFields.payload);
	printf("bat				:%#x\n", packet_val.packetFields.bat);
	printf("sensor			:%#x\n", packet_val.packetFields.sensor);
	printf("long_addr		:%#x\n", packet_val.packetFields.long_addr);
	printf("short_addr		:%#x\n", packet_val.packetFields.short_addr);
	printf("addr_mode		:%#x\n", packet_val.packetFields.addr_mode);

	printf("total size of struct = %lu\n", sizeof(packet_val));

}




