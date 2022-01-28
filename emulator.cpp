#include "include/emulator.h"

void Emulator::init(uint8_t mem_size, FILE file) {
  memory.init(mem_size);
}