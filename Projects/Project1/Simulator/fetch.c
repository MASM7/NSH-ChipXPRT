#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "fetch.h"
#include "decoder.h"
#include "alu.h"
#include "mux.h"
#include "registers.h"

void fetch(char instructions[MAX_INSTRUCTIONS][9], int *PC) {
    unsigned char chInst = 0;
    unsigned char J, C, D1, D0, Sreg, S;
    unsigned char chImm[3];
    int iImm = 0;
    int RA = 0, RB = 0, RO = 0;
    unsigned char carryOut = 0;
    int ALU_output, mux_output;

    for (int j = 0; j < 8; j++) {
        if (instructions[*PC][j] == '1') {
            chInst |= (1 << (7 - j));
        }
    }

    // Get the indivisual bit values
    J = (chInst >> 7) & 0x1;
    C = (chInst >> 6) & 0x1;
    D1 = (chInst >> 5) & 0x1;
    D0 = (chInst >> 4) & 0x1;
    Sreg = (chInst >> 3) & 0x1;
    S = (chInst >> 2) & 0x1;

    iImm = 0;
    for (int j = 2; j >= 0; j--) {
        chImm[j] = (chInst >> j) & 0x1;
        iImm += (int) (pow(2, j) + 1e-9) * chImm[j];
    }

    printf("J C: %d%d\n", J,C);
    printf("D1D0: %d%d\n", D1,D0);
    printf("Sreg S: %d%d\n", Sreg,S);
    printf("Imm: %d\n", iImm);

    for (int i = 0; i < 1000000000; i++);

    // Call the functions
    int R = decoder(D1, D0, &RA, &RB, &RO);
    ALU_output = ALU(RA, RB, S, &carryOut);
    mux_output = mux(ALU_output, iImm, Sreg);

    if (R == 1) {
        R = add_enabled_register(R, mux_output);
    } else if (R == 2) {
        R = add_enabled_register(R, mux_output);
    }

    // Print RO
    printf("RO: %d\n", RO);

    printf("J: %d\tC: %d\tcarryOut: %d\n", J,C,carryOut);
    if (J | (C & carryOut)) {
        (*PC)++;
    }
}
