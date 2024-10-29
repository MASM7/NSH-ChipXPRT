#include <stdio.h>

int main() {
	int N, i, j;
        printf("Enter the size of the vector x:\n");
	scanf("%d\n", &N);

	printf("Enter the vector x values:\n");
	float x[N];
	for (i=0; i<N; i++) {
		scanf(" %f", &x[i]);
	}
	printf("The x vector: %f\n", x[N]);
	printf("Enter the size of the matrix A:\n");


	return 0;
}
