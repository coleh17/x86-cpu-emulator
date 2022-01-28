#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

class Memory {
 private:
  uint8_t *memory;
  uint8_t mem_size;

 public:
  /**
   * Initialize memory allocation
   * @param mem_size Memory allocation size in bytes
   * @return Memory address to start of allocation
   */
  uint8_t *init(uint8_t mem_size);

  /**
   * Read a byte in memory
   * @param addr Address to read next byte from
   * @return Data stored at address
   */
  uint8_t read_byte(uint8_t addr);

  /**
   * Read 8 bit immediate of address
   * @param addr Address to read immd8 from
   * @return Immediate at memory address
   */
  uint8_t read_immd8(uint8_t addr);

  /**
   * Read 16 bit immediate of address
   * @param addr Address to read immd16 from
   * @return Immediate at memory address
   */
  uint16_t read_immd16(uint8_t addr);

};

#endif