#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "include/instructions.h"
#include "include/memory.h"
#include "include/registers.h"

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
        void init (uint8_t mem_size, FILE file);

};