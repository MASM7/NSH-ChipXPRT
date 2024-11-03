#include <stdio.h>

typedef struct {
	int iWords;
	int iCharacters;
	int iLines;
} Counts;


int main() {
	FILE *file;
	char data[100];
	Counts counts1;
	int i;

	// Read from task2test.txt
	file = fopen("task2test.txt", "r");
	if (file == NULL) {
		printf("Error! Could not open file.\n");
		return 1;
	}

	counts1.iWords = 0;
	counts1.iCharacters = 0;
	counts1.iLines = 0;
	while (fgets(data, 100, file) != NULL) {
		for (i=0; i<100; i++) {
			if (((data[i] != ' ') && (data[i] != '\t')) && (data[i] != '\n') && (((data[i+1] == ' ') || (data[i+1] == '\t')) || data[i+1] == '\n')) {
				counts1.iWords += 1;
			}

			if (data[i] == ' ' || data[i] == '\t') {
                                continue;
			}
			else if (data[i] == '\n') {
				counts1.iLines += 1;
				break;
			}
			counts1.iCharacters += 1;
		}
	}

        printf("Number of Words: %d\n", counts1.iWords);
        printf("Number of Characters: %d\n", counts1.iCharacters);
	printf("Number of Lines: %d\n", counts1.iLines);

	fclose(file);
	return 0;
}	
