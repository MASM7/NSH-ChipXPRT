#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i, a, b;
	int sum = 0;
	int *x, *y ,*z;

	printf("Enter number of elements for x, y, and z: ");
	scanf("%d", &n);

	x = (int*) malloc(n * sizeof(int));
	if (x == NULL) {
		printf("Error! Memory not allocated.");
		return 1;
	}
	y = (int*) malloc(n * sizeof(int));
        if (y == NULL) {
                printf("Error! Memory not allocated.");
                return 1;
        }
	z = (int*) malloc(n * sizeof(int));
        if (z == NULL) {
                printf("Error! Memory not allocated.");
                return 1;
        }

	printf("Enter the value of a: ");
	scanf(" %d", &a);
	printf("Enter the value of b: ");
        scanf(" %d", &b);
	printf("Enter the values of x: ");
	for (i=0; i<n; i++) {
		scanf(" %ls", &x[i]);
	}
	for (i=0; i<0; i++) {
	printf("Enter the value of y: ");
        scanf(" %ls", &y[i]);
	}
	for (i=0; i<n; i++) {
		z[i] = a * x[i] + b * y[i];
	}

	printf("\nThe resulting vector z: %d\n", z[n]);

	free(x);
	free(y);
	free(z);
	return 0;
}
