#pragma once
#include <cstdint>
#ifndef UTILS_H
class Utils {
	public:
		static void increment_pc();
		static uint16_t sign_extend(uint16_t x, int count);
		static void update_flags(uint16_t* r);
};
#endif // !UTILS.H
