#include <iostream>
#include "const.h"

int size = 10;
// sets the maximum memory of 65536
uint16_t memory[UINT16_MAX];
// sets up 8 16-bit registers
uint16_t registers[R_COUNT];

void setup() {
    // set up the first instruction
    registers[R_PC] = 0x1EFC; //PC_START;
}

void increment_pc() {
    // increments the pc
    registers[R_PC]++;
}

void handle_op_add(int instr) {
    std::cout << " INSTR: ";
    std::cout << instr;

    int dr = (instr & 0xE00) >> 9;
    std::cout << " Dr: ";
    std::cout << dr;

}


int main(int argc, const char* argv[]) {
    // Load one instruction from memory at the address of the PC register.

    // Increment the PC register.
    // Look at the opcode to determine which type of instruction it should perform.
    // Perform the instruction using the parameters in the instruction.
    // Go back to step 1.

    // do any setting up
    setup();
    bool is_running = true;
    do {
        int op_code = registers[R_PC] >> OP_CODE;
        std::cout << " Op code: ";
        std::cout << op_code;
        switch(op_code) {
            case OP_ADD:
                handle_op_add(registers[R_PC]);
                break;
            case OP_AND:
                break;
            case OP_NOT:
                break;
            case OP_BR:
                break;
            case OP_JMP:
                break;
            case OP_JSR:
                break;
            case OP_LD:
                break;
            case OP_LDI:
                break;
            case OP_LDR:
                break;
            case OP_LEA:
                break;
            case OP_ST:
                break;
            case OP_STI:
                break;
            case OP_STR:
                break;
            case OP_TRAP:
                break;
            case OP_RES:
                break;
            case OP_RTI:
                break;
            default:
                break;
        }
        is_running = false;
    } while(is_running);
    //std::cout << MAX;
}
