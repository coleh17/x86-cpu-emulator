#include "include/emulator.h"

void Emulator::init(uint8_t mem_size, FILE *bin_file) {
  // Initialize memory and print starting instruction pointer
  uint8_t *eip = memory.init(mem_size);
  printf("eip: %x\n", eip);

  // Load binary file into memory allocation
  memory.load_asm_file(bin_file);

  // Print first instructions (for testing)
  uint8_t m = memory.read_byte(*eip);
  printf("next: %d, %x", m, m);
  (*eip)++;
  m = memory.read_byte(*eip);
  printf("next: %d, %x", m, m);
  (*eip)++;
  m = memory.read_byte(*eip);
  printf("next: %d, %x", m, m);
}