#include <stdio.h>
#include <math.h>


// Function for adding two integers
int iAdd(int a, int b) {
	printf("%d\n", a+b);
	return a + b;
}
// Function for adding two floats
float fAdd(float c, float d) {
        printf("%f\n", c+d);
	return c + d;
}
// Function for calculating the area of a circle
float fCircleArea(float r) {
	printf("%f\n", r*r*M_PI);
	return (r * r) * M_PI;
}
// Function for calculating rhe area of a rectangle
float fRectArea(float m, float n) {
	printf("%f\n", m*n);
	return m * n;
}
// Function for calculating the factorial of a number recursively
int iFactorial(int f) {
	if (f > 0) {
		return f * iFactorial(f-1);
	}
	else if (f == 0) {
		return 1;
	}
}



int main() {
	int a, b, f;
	float c, d, r, m, n;
	int fact;

	// Add two integers
	printf("Enter two integer values:");
	scanf("%d", &a);
	scanf(" %d", &b);
	iAdd(a, b);

	// Add two floats
        printf("Enter two float  values:");
        scanf("  %f", &c);
        scanf("   %f", &d);
        fAdd(c, d);

	// Calculate the area of circle
        printf("Enter the radius of a circle:");
        scanf("    %f", &r);
        fCircleArea(r);

	// Calculating the area of a recatngle
        printf("Enter the two sides of a rectangle:");
        scanf("     %f", &m);
        scanf("      %f", &n);
        fRectArea(m, n);

	// Calculate the factorial
        printf("Enter an integer value:");
        scanf("       %d", &f);
        fact = iFactorial(f);
        printf("%d\n", fact);


	return 0;
}
