// virmach.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "const.h"

int main() {
	/* set the PC to starting position */
	/* 0x3000 is the default */
	enum { PC_START = 0x3000 };
	registers[R_PC] = PC_START;

	int start = 1;
	while(start) {
		//uint16_t instr = mem_read(registers[R_PC]++);
		//uint16_t op = instr >> 12;
	}
}
