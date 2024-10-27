#include <stdio.h>

int main() {
	int N, i;
	printf("Enter a prime number N: ");
	scanf("%d", &N);
	
	// check for values up-to half-N. 
	// If there is a factor, it will show up in the first half.
	if (N == 1) {
		printf("%d is not a prime number.\n", N);
                }
        else if (N == (2 | 3)) {
		printf("%d is a prime number.\n", N);
                }

	for (i = 2; i <= N/2; i++) { 
		if (N % i == 0) {
			printf("%d is not a prime number.\n", N);
			break;
		}
		else {
                        printf("%d is a prime number.\n", N);
			break;
		}
	}

	return 0;
}
