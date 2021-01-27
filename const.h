#pragma once
#ifndef CONST.H
/* starting address */
#define LAST(k,n) ((k) & ((1<<(n))-1))
#define MID(k,m,n) LAST((k)>>(m),((n)-(m)))
#define MASK(b, p, n) ((b) >> (p)) & ((1 << (n)) - 1)
extern enum { 
	PC_START = 0x3000,
	OP_CODE = 12
};

/* 10 registers */
extern enum REGSTR {
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
	//
	R_COUNT   // # of registers
};

/* 16 instructions */
extern enum instrs {
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

/* condition flags */
extern enum flgs {
	FL_POS = 1 << 0, // positive
	FL_ZRO = 1 << 1, // zero
	FL_NEG = 1 << 2, // negative
};

#endif // !CONST.H
