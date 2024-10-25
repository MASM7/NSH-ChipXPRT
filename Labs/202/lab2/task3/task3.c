#include <stdio.h>

int main() {
        // Initialize variables
        float fDistance;
	char chMean;
	float fSpeedWalking;
	float fSpeedBicycle;
	float fSpeedCar;
	float fTime;

        // Prompt the user to enter a distance and mean of transportation
        printf("Please enter the distance to destination (km).\n");
	scanf("%f", &fDistance);
	printf("Then, please enter the transport mean ('W' for walking, 'C' for car, 'B' for bicycle):\n");
	scanf(" %c",&chMean);
	
        // Specify the average speeds in km/h
        fSpeedWalking = 5;
	fSpeedBicycle = 18;
	fSpeedCar = 60;

	// Find the time in hours
	if (chMean == 87 | chMean ==119) {
		fTime = fDistance / fSpeedWalking;
                printf("It will take around %.3f Hours\n", fTime);
        }
        else if (chMean == 67 | chMean == 99) {
                fTime = fDistance / fSpeedCar;
                printf("It will take around %.3f Hours\n", fTime);
        }
        else if (chMean == 66 | chMean == 98) {
                fTime = fDistance / fSpeedBicycle;
                printf("It will take around %.3f Hours\n", fTime);
        }
        


	return 0;
}
