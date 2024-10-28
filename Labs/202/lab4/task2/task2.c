#include <stdio.h>

int main() {
	int M, i, j;

	printf("Enter the number of minutes: ");
	scanf("%d", &M);

	printf("M  : S\n");

	for (i=0; i<M; i++) {
		for (j=0; j < 60; j++) {
				printf("%02d : %02d\n", i, j);
		}
						
	}
	

	return 0;
}
