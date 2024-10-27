#include <stdio.h>

int main() {
	// Part (a): N to 0 descending order
	// initialize parameters
	int N, i;
	float increm, f;
	printf("Enter a positive integer N: ");
	scanf("%d", &N);

	printf("Numbers from %d to 0 in descending order:\n", N);
	for (i = N; i >=0; i--) {
		printf("%d ", i);
	}
	// Part (b): 0 to N ascending order
        printf("\nNumbers from 1 to %d following pattern B:\n", N);

	for (i = 1; i <= N; i++) {
		printf("%d ", i);
	}
	// Part (c): customized increments
	printf("\nEnter an increment value less than 1: ");
	scanf("%f", &increm);
		
	f = 0;
	while (f <= N) {
		if (increm >= 1 | increm <= 0) {
                printf("Error: Enter a valid positive increment below 1");
	        break;
		}
		
		printf("%f ", f);
		f += increm;
	}
	printf("\n");

	return 0;
}
