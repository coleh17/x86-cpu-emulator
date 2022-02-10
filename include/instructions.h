#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "memory.h"
#include "registers.h"

class Instructions {
  Memory memory;
  Registers registers;
  uint8_t eip;

  void init();
  void read_instruction(uint8_t instruction);

  /**
   * Load an immediate of 8 bits to specified register
   * @param reg Register to load immd to
   * @param imm8 Immediate to load
   */
  void load_immd8_to_reg(uint8_t reg, uint8_t immd8);
};