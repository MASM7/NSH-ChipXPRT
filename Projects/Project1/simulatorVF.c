#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX_INSTRUCTIONS 9

// Declare functions
int loader(const char *filename, char instructions[MAX_INSTRUCTIONS][9]);
void fetch(char instructions[MAX_INSTRUCTIONS][9], int *PC);
int decoder(unsigned char D1, unsigned char D0, int *RA, int *RB, int *RO);
int ALU(int RA, int RB, unsigned char S, unsigned char *carryOut);
int mux(int ALU_output, int iImm, unsigned char Sreg);
int add_enabled_register(int register_value, int enabled_register);

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

// Loader function definition
int loader(const char *filename, char instructions[MAX_INSTRUCTIONS][9]) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    char command[9];
    int i = 0;

    while (fgets(command, 9, file) != NULL) {
        if (command[0] == '\n') continue;
        strncpy(instructions[i], command, 8);
        instructions[i][8] = '\0';
        i++;
    }

    fclose(file);
    return 0;
}

// Fetching function definition
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

    for (int i=0; i<1000000000; i++);

    // Call the functions
    int R = decoder(D1, D0, &RA, &RB, &RO);
    ALU(RA, RB, S, &carryOut);
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

// Decoder function definition
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
}

// ALU function definition
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

// MUX function definition
int mux(int ALU_output, int iImm, unsigned char Sreg) {
	if (Sreg == 1) {
		return iImm;
	}
	else {
		return ALU_output;
	}
}

// Determine the enabled register
int add_enabled_register(int register_value, int enabled_register) {
    return register_value + enabled_register;
}
