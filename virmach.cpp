#include <iostream>
#include "const.h"
#include "virmach.h"


unsigned createMask(unsigned a, unsigned b) {
	unsigned mask = 0;
	for(unsigned i = a; i <= b; i++) {
		mask |= 1 << i;
	}
	return mask;
}

void signExtend(uint16_t* arg, int count) {
	if((*(arg) >> (count - 1)) & 1) {
		*(arg) = (0xFFFF << count);
	}
}

void updateFlags(uint16_t arg) {
	if(regs[arg] >> 15) {
		// a 1 in the left-most bit 
		// indicates negative
		regs[R_COND] = FL_NEG;
	} else if(regs[arg] == 0) {
		regs[R_COND] = FL_ZRO;
	} else {
		regs[R_COND] = FL_POS;
	}
}

void opAdd(uint16_t op) {
	unsigned mask = createMask(5, 5);
	unsigned mode = op & mask;
	if(mode == 0) {
		unsigned dr, sr1, imm5;
		mask = createMask(9, 11);
		dr = op & mask;
		mask = createMask(9, 11);
		sr1 = op & mask;
		mask = createMask(0, 4);
		imm5 = op & mask;
	} else {
		unsigned dr, sr1, sr2;
		mask = createMask(9, 11);
		dr = op & mask;
		mask = createMask(6, 8);
		sr1 = op & mask;
		mask = createMask(0, 2);
		sr2 = op & mask;
	}
}

int main(int argc, const char* argv[]) {
	if(argc < 2) {
		printf("lc3 [image-file1] ...\n");
		exit(2);
	}

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
