#include "alu.h"

int ALU(int RA, int RB, unsigned char S, unsigned char *carryOut) {
    int result;

    if (S == 0) {
        result = RA + RB;
        if (result > 15) {
            *carryOut = 1;
        }
        else {
            *carryOut = 0;
        }
    } else {
        result = RA - RB;
        if (RA < RB) {
            *carryOut = 1;
        }
        else {
            *carryOut = 0;
        }
    }

    return result;
}
