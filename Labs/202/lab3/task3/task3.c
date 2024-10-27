#include <stdio.h>
#include <string.h>

int main() {
	int iNumCities, iCity, i;
	unsigned int min, max;
	float sum, mean;

	printf("Enter the number of cities: ");
	scanf("%d", &iNumCities);
	
	sum = 0;
	max = 0;
	min = 2700000000;
	for (i=1; i <= iNumCities; i++) {
		printf("Enter the population of the city%d: ", i);
		scanf(" %d", &iCity);
		sum += iCity;

		if (iCity > max) {
			max = iCity;
		}

		if (iCity < min) {
			min = iCity;
		}
	}

	mean = sum / iNumCities;
	printf("Mean population: %.2f\n", mean);
	printf("Maximum population: %d\n", max);
        printf("Minimum population: %d\n", min);

	return 0;
}
