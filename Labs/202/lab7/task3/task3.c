#include <stdio.h>


int main() {
	
	FILE *file;
	int c, i;

	file = fopen("bitstream1.bit", "b");
	if (file = NULL) {
		printf("Error! Could not open file.\n");
		return 1;
	}
	
	int data[ftell(file)];


	c = fgetc(file);
	int counter = 0;
	while (c != EOF) {
		for (i=0; i<8; i++) {
			data[i] = c;
		}
		data[counter] = c;
		if ((sizeof(data) % 8 == 0) {
			
		}


		counter++
	}

	return 0;
}
