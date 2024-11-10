#include "mux.h"

int mux(int ALU_output, int iImm, unsigned char Sreg) {
    if (Sreg == 1) {
        return iImm;
    }
    else {
        return ALU_output;
    }
}
