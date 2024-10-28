#include <stdio.h>

int main() {
	int  i, j;
	int min, max;
	float average;
	int ar_iPopulation[10];
	
	int sum = 0;
	for (i=0; i< 10; i++) {
		printf("Enter the population of city %d: ", i+1);
		scanf(" %d", &ar_iPopulation[i]);
		
		sum += ar_iPopulation[i];

		if (i == 0) {
			max = min = ar_iPopulation[i];
		}
		else if (ar_iPopulation[i] < min) {
			min = ar_iPopulation[i];
		}
		else if (ar_iPopulation[i] > max) {
			max = ar_iPopulation[i];
		}
	}
	
	for (i=10-1; i>0; i--) {
		printf("%d ", ar_iPopulation[i]);
	}

	printf("\nThe maximum is %d. The minimum is %d.\n", max, min);
	printf("The average population is %.2f\n", sum/10.0);


	return 0;
}
