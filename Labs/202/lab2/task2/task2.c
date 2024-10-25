#include <stdio.h>

int main() {
	// Initialize variables
	float fGrade;

	// Prompt the user to enter a score
	printf("Please enter the grade: ");
	scanf("%f", &fGrade);

	// Define the boundaries using if-else
	if (fGrade >=73 & fGrade <= 100) {
		printf("Congrats! You got an A grade\n");
	}
	else if (fGrade >= 68 & fGrade < 73) {
		printf("You got a B+ grade\n");
	}
	else if (fGrade >= 63 & fGrade < 68) {
                printf("You got a B grade\n");
        }
	else if (fGrade >= 58 & fGrade < 63) {
                printf("You got a C+ grade\n");
        }
	else if (fGrade >= 52 & fGrade < 58) {
                printf("You got a C grade\n");
        }
	else if (fGrade >= 47 & fGrade < 52) {
                printf("You got a D+ grade\n");
        }
	else if (fGrade >= 41 & fGrade < 47) {
                printf("You got a D grade\n");
        }
	else if (fGrade < 41 & fGrade >= 0) {
                printf("You got a F grade\n");
        }

	return 0;
}
