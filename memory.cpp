#include "include/memory.h"

uint8_t *Memory::init(uint8_t mem_size) {
  this->mem_size = mem_size;
  this->memory = (uint8_t *)malloc(mem_size);

  return this->memory;
}

uint8_t Memory::read_byte(uint8_t addr) {
  return this->memory[addr];
}

uint8_t Memory::read_immd8(uint8_t addr) {
  return this->memory[addr + 1];
}

uint16_t Memory::read_immd16(uint8_t addr) {
  return this->memory[addr + 2] << 8 | read_immd8(addr);
}