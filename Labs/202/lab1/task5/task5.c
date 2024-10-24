#include <math.h>
#include <stdio.h>

float fM1;
float fM2;
float fDistance;
double fK;
double fForce;

int main() {
	printf("Enter the two masses, M1 and M2 in kg, and the distance, in km.\n");
	scanf("%f", &fM1);
	scanf("%f", &fM2);
	scanf("%f", &fDistance);

	// convert the ditance from km to m
	fDistance = fDistance * 1000;
	// gravitational constant in dyn.cm^2/g^2
	fK = 6.67 * (10^(-8));
	// convert k into SI units
	fK = 6.67 * (10^(-11));

	// find the force in Newton
	fForce = fK * (fM1 * fM2) / pow(fDistance, 2);

	printf("The force is %.15f Newton.", fForce);

	return 0;
}
