#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	FILE *file;
	char command[9];
	char instructions[9][9];
	char inst[8];
	unsigned char chInst;
	int i, j, k;
	int PC = 7;
	unsigned char mask[8];
	unsigned char J, C, D1, D0, Sreg, S;
	unsigned char chImm[3];
	int iImm;

	// Reading from fibonacci.bin
	file = fopen("fibonacci.bin", "rb");
	if (file == NULL) {
		printf("Error! Could not open file.\n");
		return 1;
	}
	
	i=0;
	while (fgets(command, 9, file) != NULL) {
		if(command[0] == '\n') continue;
		for (j=0; j<8; j++) {
			instructions[i][j] = command[j];
		}
		instructions[i][8] = '\0';
		i++;
	}
	
	for (j=0; j<9; j++) {
		printf("Intruction #%d: ", j+1);
		for (k=0; k<1; k++) {
			printf("%s", instructions[j]);
		}
		printf("\n\n");
	}
	printf("Instruction #%d: ", PC+1);
	for (j=0; j<8; j++) {
		inst[j] = instructions[PC][j];
		printf("%c", inst[j]);
	}
	printf("\n\n");
	for (j=0; j<8; j++) {
		if (inst[j] == '1') {
			chInst = chInst | (1 << (7-j));
		}
	}
	if (PC) {
		printf("Character #%d: %08b\n", PC+1, chInst); 
	}
	
	for (j=0; j<8; j++) {
		mask[j] = mask[j] | (1 << j);
	}

	//J = mask[7] & (chInst >> 7);
        J = (chInst >> 7) & 0x1;
	//C = mask[6] & (chInst >> 6);
        C = (chInst >> 6) & 0x1;
	//D1 = mask[5] & (chInst >> 5);
        D1 = (chInst >> 5) & 0x1;
	//D0 = mask[4] & (chInst >> 4);
        D0 = (chInst >> 4) & 0x1;
	//Sreg = mask[3] & (chInst >> 3);
        Sreg = (chInst >> 3) & 0x1;
	//S = mask[2] & (chInst >> 2);
	S = (chInst >> 2) & 0x1;
	iImm = 0;
	for (j=2; j>=0; j--) {
		chImm[j] = (int) ((chInst >> j) & 0x1);
		iImm += (int) (pow(2,j) + 1e-9) * chImm[j];
	}

	printf("\nJ: %d, C: %d, D1: %d, D0: %d, Sreg: %d, S: %d, Imm: %d\n", J, C, D1, D0, Sreg, S, iImm);

	int output;
	if (D1 == 0 && D0 == 0) {
		output = 8;
	}
	else if (D1 == 0 && D0 == 1) {
		output = 4;
	}
	else if (D1 == 1 && D0 == 0) {
		output = 2;
	}
	else {
		output = 1;
	}

	printf("\nOutput: %b\n", output);

	fclose(file);
	return 0;
}
