#include "decoder.h"

int decoder(unsigned char D1, unsigned char D0, int *RA, int *RB, int *RO) {

    *RA = 0;
    *RB = 0;
    *RO = 0;

    // Address mapping
    if (D1 == 0 & D0 == 0) {
        *RA = 1;
        return *RA;
    } else if (D1 == 0 & D0 == 1) {
        *RB = 2;
        return *RB;
    } else if (D1 == 1 & D0 == 0) {
        *RO = 3;
        return *RO;
    }

    return 0;
}

