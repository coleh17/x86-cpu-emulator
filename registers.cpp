#include "include/registers.h"

void Registers::init(uint8_t eip) {
  // Clear all flags
  this->flags = 0;

  // Initialize instruuction pointer to provided adrr
  this->eip = eip;
}

uint8_t Registers::is_flag_set(uint8_t flag) {
  // Check if flag is set
  if (this->flags & (1 << flag)) {
    return 1;
  } else {
    return 0;
  }
}

void Registers::set_flag(uint8_t flag) {
  *this->registers |= 1UL << flag;
}

void Registers::clear_flag(uint8_t flag) {
  *this->registers &= ~(1UL << flag);
}

uint8_t Registers::get_eax() {
  return registers[0];
}

uint8_t Registers::get_ecx() {
  return registers[1];
}

uint8_t Registers::get_edx() {
  return registers[2];
}

uint8_t Registers::get_ebx() {
  return registers[3];
}

uint8_t Registers::get_esp() {
  return registers[4];
}

uint8_t Registers::get_ebp() {
  return registers[5];
}

uint8_t Registers::get_esi() {
  return registers[6];
}

uint8_t Registers::get_edi() {
  return registers[7];
}

void Registers::set_eax(uint8_t val) {
  this->registers[0] = val;
}

void Registers::set_ecx(uint8_t val) {
  this->registers[1] = val;
}

void Registers::set_edx(uint8_t val) {
  this->registers[2] = val;
}

void Registers::set_ebx(uint8_t val) {
  this->registers[3] = val;
}

void Registers::set_esp(uint8_t val) {
  this->registers[4] = val;
}

void Registers::set_ebp(uint8_t val) {
  this->registers[5] = val;
}

void Registers::set_esi(uint8_t val) {
  this->registers[6] = val;
}

void Registers::set_edi(uint8_t val) {
  this->registers[7] = val;
}