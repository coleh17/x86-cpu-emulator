#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "instructions.h"
#include "memory.h"
#include "registers.h"

class Emulator {
    private:
        Memory memory;
        Instructions instructions;

    public:
    /**
     * Initialize the emulator
     * @param mem_size Size of memory in bits
     * @param file Asm file to read from
     */
        void init (uint8_t mem_size, FILE *bin_file);

};