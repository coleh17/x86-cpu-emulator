#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * Wrapper class to handle the CPUs registers
 */
class Registers {
 private:
  // CPU registers
  // eax, ecx, edx, ebx, esp, ebp, esi, edi
  uint8_t registers[8];

  // CPU flags
  // CF, ZF, SF, OF
  uint8_t flags;

  // Instruction pointer
  uint8_t eip;

 public:
  /**
   * Initialize registers
   * @param eip Starting instruction pointer
   */
  void init(uint8_t eip);

  /**
   * Check if flag is set
   * @param flag
   * @return If flag is set
   */
  uint8_t is_flag_set(uint8_t flag);

  /**
   * Set a flag
   * @param flag
   */
  void set_flag(uint8_t flag);

  /**
   * Clear a flag
   * @param flag
   */
  void clear_flag(uint8_t flag);

  /**
   * Get a registers value
   * @return Data stored in register
   */
  uint8_t get_eax();
  uint8_t get_ecx();
  uint8_t get_edx();
  uint8_t get_ebx();
  uint8_t get_esp();
  uint8_t get_ebp();
  uint8_t get_esi();
  uint8_t get_edi();

  /**
   * Set a registers value
   * @param val Value to insert into register
   */
  void set_eax(uint8_t val);
  void set_ecx(uint8_t val);
  void set_edx(uint8_t val);
  void set_ebx(uint8_t val);
  void set_esp(uint8_t val);
  void set_ebp(uint8_t val);
  void set_esi(uint8_t val);
  void set_edi(uint8_t val);
};