#include "utils.h"
#include "const.h"
uint16_t FULL_WORD = 0xFFFF;

void Utils::increment_pc() {

}

uint16_t Utils::sign_extend(uint16_t x, int count) {
    return (x >> (count - 1)) & 1
        ? (x |= (FULL_WORD << count))
        : x;
}

void Utils::update_flags(uint16_t* reg) {
    if(*(reg) & FULL_WORD) return 
}
