#include <stdio.h>

int main () {
	int iN, i;
	char chChar;
	int freq_a, freq_e, freq_i, freq_o, freq_u, freq_others;

	printf("Enter the number of characters: ");
	scanf("%d", &iN);
	
	freq_a = 0;
	freq_e = 0;
	freq_i = 0;
	freq_o = 0;
	freq_u = 0;
	freq_others = 0;
	for (i=1; i <= iN; i++) {
		printf("Enter the character number %d: ", i);
		scanf(" %c", &chChar);
		
		if (chChar == 'a') {
			freq_a += 1;
		}
		else if (chChar == 'e') {
                        freq_e += 1;
                }
                else if (chChar == 'i') {
                        freq_i += 1;
                }
                else if (chChar == 'o') {
                        freq_o += 1;
                }
                else if (chChar == 'u') {
                        freq_u += 1;
                }
                else {
			freq_others += 1;
                }

	}
	

	printf("Sample Output for N = %d:", iN);
	printf("\n\tFrequency of a = %d", freq_a);
        printf("\n\tFrequency of e = %d", freq_e);
        printf("\n\tFrequency of i = %d", freq_i);
        printf("\n\tFrequency of o = %d", freq_o);
        printf("\n\tFrequency of u = %d", freq_u);
        printf("\n\tFrequency of others = %d\n", freq_others);


	return 0;
}
