#include <stdio.h>

int main() {

        int x = 1;
        char *c = (char *) &x;
        if (*c == 1) {
                printf("My machine's format is Little Endian\n");
        }
        else {
                printf("My machine's format is Big Endian\n");
        }
	
	if (sizeof(char*) == 4) {
		printf("The architecture is of 32-bit\n");
	}
	else if (sizeof(char*) == 8) {
                printf("The architecture is of 64-bit\n");
        }


        return 0;
}
