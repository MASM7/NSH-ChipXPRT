// There is a single voltage source (V1) with one resistor in series (R1) followed by two in parallel (R2 and R3).
// To use Kirchoff's current law, we need to calculate the voltage (V2) after R1, since the other resistors are connected to ground.
// We need the three currents since i1 = i2+i3

#include <stdio.h>

float R1;
float R2;
float R3;
float V1;
float V2;
float i1;
float i2;
float i3;

float R23;
float R123;

int main() {
// Use voltage divider.
// Adding R2 and R3 in parallel
	printf("What are the values of V1, R1, R2, and R4? (in Volts and Ohms)\n");
	scanf("%f", &V1);
	scanf("%f", &R1);
        scanf("%f", &R2);
        scanf("%f", &R3);

	R23 = (R2 * R3) / (R2 + R3);
	R123 = R1 + R23;
	
	i1 = V1 / R123;
	V2 = (R23 / R123) * V1;
	i2 = V2 / R2;
	i3 = V2 / R3;

	printf("The values of the current:\n i1: %.3f [A]\n i2: %.3f [A]\n i3: %.3f [A]", i1, i2, i3);

	return 0;
}
