#include "include/instructions.h"

void Instructions::init() {
  this->eip = 0;
  this->memory.init(1024);
  this->registers.init(this->eip);
}

void Instructions::read_instruction(uint8_t instruction) {
}

void Instructions::load_immd8_to_reg(uint8_t reg, uint8_t immd8) {
  switch (reg) {
    case 0:
      this->registers.set_eax(immd8);
      break;
    case 1:
      this->registers.set_ecx(immd8);
      break;
    case 2:
      this->registers.set_edx(immd8);
      break;
    case 3:
      this->registers.set_ebx(immd8);
      break;
    case 4:
      this->registers.set_esp(immd8);
      break;
    case 5:
      this->registers.set_ebp(immd8);
      break;
    case 6:
      this->registers.set_esi(immd8);
      break;
    case 7:
      this->registers.set_edi(immd8);
      break;
  }
}