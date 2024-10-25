#include <stdio.h>

int main() {
	// Initialize variables
	char chChar;
	
	// Ask the user to enter a character
	printf("Enter a single letter.\n");
	scanf("%c", &chChar);

	// Check if it is a vowel, consonant, or nither
	if (chChar == 65 | chChar == 69 | chChar == 73 | chChar == 79 | chChar == 85 | chChar == 97 | chChar == 101 | chChar == 105 | chChar == 111 | chChar == 117) {
		// It is even
		printf("It is a vowel\n");
	}
	else if ((chChar >= 66) & (chChar <= 90) | ((chChar >= 98) & (chChar <= 122))) {
		printf("It is a consonant\n");
	}
	else {
		printf("Invalid character. You must enter a letter only!\n");
	}

	return 0;
}
