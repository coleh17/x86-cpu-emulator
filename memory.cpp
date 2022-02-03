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
  // Shift 8 bytes to read next imm8 and append with previous imm8
  return this->memory[addr + 2] << 8 | read_immd8(addr);
}

void Memory::load_asm_file(FILE *file) {
  fread(this->memory, 1, 0x200, file);
}