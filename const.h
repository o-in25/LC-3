#pragma once
extern enum regs {
	R_R0 = 0, // general purpose 
	R_R1,     // general purpose 
	R_R2,     // general purpose 
	R_R3,     // general purpose 
	R_R4,     // general purpose 
	R_R5,     // general purpose 
	R_R6,     // general purpose 
	R_R7,     // general purpose 
	R_PC,     // program counter 
	R_COND,   // cond 
	R_COUNT   // count
};

extern enum isa {
	OP_BR = 0, // branch 
	OP_ADD,    // add  
	OP_LD,     // load 
	OP_ST,     // store 
	OP_JSR,    // jump register 
	OP_AND,    // bitwise and 
	OP_LDR,    // load register 
	OP_STR,    // store register 
	OP_RTI,    // unused 
	OP_NOT,    // bitwise not 
	OP_LDI,    // load indirect 
	OP_STI,    // store indirect 
	OP_JMP,    // jump 
	OP_RES,    // reserved (unused) 
	OP_LEA,    // load effective address 
	OP_TRAP    // execute trap 
};

extern enum flgs {
	FL_POS = 1 << 0, // positive
	FL_ZRO = 1 << 1, // zero
	FL_NEG = 1 << 2, // negative
};