#include <stdio.h>

int main() {
	int N, i, j, k;

	printf("Enter the number of rows: ");
	scanf("%d", &N);
	
	// Using for loop
	for (i=1; i<= N; i++) {
		for (j=N; j>i; j--) {
			printf(" ");
		}
		for (k=1; k<=i; k++) {
			printf("*");
		}
		printf("\n");
	}

	// Using while loop
	i = 1;
	while (i <= N) {
	        j = N;
        	k = 1;
		while (j > i) {
                        printf(" ");
			j -= 1;
                }
                while (k <= i) {
                        printf("*");
                	k += 1;
		}
                printf("\n");
		i += 1;
	}

	return 0;
}
