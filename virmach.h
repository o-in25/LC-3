#pragma once
// memory (65536)
extern uint16_t mem[UINT16_MAX];
// registers (10)
extern uint16_t regs[R_COUNT];

extern unsigned createMask(unsigned a, unsigned b);
extern void updateFlags(uint16_t arg);
extern void signExtend(uint16_t* arg, int count);

extern enum OP_ADD_t {
	MODE = 0x10,
};