#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "loader.h"
#include "decoder.h"
#include "alu.h"
#include "mux.h"
#include "registers.h"

#define MAX_INSTRUCTIONS 9

int main() {
    char instructions[MAX_INSTRUCTIONS][9];
    int PC = 0;

    // Load instructions from the binary file
    if (loader("fibonacci.bin", instructions)) {
        return 1;
    }

    while (PC < MAX_INSTRUCTIONS) {
        fetch(instructions, &PC);
        PC += 1;
        if (PC == 8) {
            PC = 0;
        }
    }

    return 0;
}
