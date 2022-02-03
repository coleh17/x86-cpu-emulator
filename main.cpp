#include "include/emulator.h"

int main() {

    // Binary file to read from
    FILE *bin_file = fopen("./tests/file.bin", "rb");
    
    // Initialize and run emulator
    Emulator emulator;
    emulator.init(1024, bin_file);

    return 0;
}