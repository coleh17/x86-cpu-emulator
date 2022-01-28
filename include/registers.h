#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

class Registers {
 private:
  uint8_t registers[8];
  uint8_t flags;
  uint8_t eip;

 public:
  void init(uint8_t eip);

  uint8_t get_flag(uint8_t flag);
  void set_flag(uint8_t flag);
  void clear_flag(uint8_t flag);

  uint8_t get_eax();
  uint8_t get_ecx();
  uint8_t get_edx();
  uint8_t get_ebx();
  uint8_t get_esp();
  uint8_t get_ebp();
  uint8_t get_esi();
  uint8_t get_edi();

  void set_eax(uint8_t val);
  void set_ecx(uint8_t val);
  void set_edx(uint8_t val);
  void set_ebx(uint8_t val);
  void set_esp(uint8_t val);
  void set_ebp(uint8_t val);
  void set_esi(uint8_t val);
  void set_edi(uint8_t val);
};