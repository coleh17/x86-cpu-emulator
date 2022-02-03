#include "include/emulator.h"

void Emulator::init(uint8_t mem_size, FILE *bin_file) {
  uint8_t *eip = memory.init(mem_size);
  printf("eip: %x", eip);
  memory.load_asm_file(bin_file);
  uint8_t m = memory.read_immd16(*eip);
  printf("next: %d, %x", m, m);
}

int main() {
  Emulator em;
  em.init(1024, fopen("./tests/file.bin", "rb"));

  return 0;
}