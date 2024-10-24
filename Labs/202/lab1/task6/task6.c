#include <stdio.h>

int main() {
	// ax^2 + bx + c = 0
	// The derivative is used to find the max or min values (extrema).
	// The derivative is 2ax + b = 0
	// The maximum happens at x = -b / (2a)
	
	float fA;
	float fB;
	float fC;
	float fExtrema_at_X;

	printf("Enter the coefficients of the quadratic polynomial a, b, and c, where the polynomial is ax^2 + bx + c = 0.\n");
	scanf("%f", &fA);
	scanf("%f", &fB);
	scanf("%f", &fC);

	// Extrema (max or min)
	fExtrema_at_X  = -1 * fB / (2 * fA);
	printf("The extrema (max or min) is at %.2f\n", fExtrema_at_X);

	return 0;
}
