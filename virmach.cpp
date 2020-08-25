#include <iostream>
#include "const.h"

int main() {
	// memory (65536)
	uint16_t mem[UINT16_MAX];
	// registers (10)
	uint16_t regs[R_COUNT];
	// set the default 
	regs[R_PC] = 0x3000;
	while(true) {
		uint16_t op = ((1 << regs[R_PC]) - 1) << 0;
		regs[R_PC] = regs[R_PC] >> 1;
		switch(op) {
			case OP_BR:
				// TODO: handle OP_BR
				break;
			case OP_ADD:
				// TODO: handle OP_ADD
				break;
			case OP_LD:
				// TODO: handle OP_LD
				break;
			case OP_ST:
				// TODO: handle OP_ST
				break;
			case OP_JSR:
				// TODO: handle OP_JSR
				break;
			case OP_AND:
				// TODO: handle OP_AND
				break;
			case OP_LDR:
				// TODO: handle OP_LDR
				break;
			case OP_STR:
				// TODO: handle OP_STR
				break;
			case OP_RTI:
				// TODO: handle OP_RTI
				break;
			case OP_NOT:
				// TODO: handle OP_NOT
				break;
			case OP_LDI:
				// TODO: handle OP_LDI
				break;
			case OP_STI:
				// TODO: handle OP_STI
				break;
			case OP_JMP:
				// TODO: handle OP_JMP
				break;
			case OP_RES:
				// TODO: handle OP_RES
				break;
			case OP_LEA:
				// TODO: handle OP_LEA
				break;
			case OP_TRAP:
				// TODO: handle OP_TRAP
				break;
			default:
				// exit
				return 0;
		}
	}
}
