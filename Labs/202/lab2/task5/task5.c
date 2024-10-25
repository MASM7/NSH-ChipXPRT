#include <stdio.h>
#include <stdbool.h>
int main() {
        // Initialize variables
	// For chExercise, I started using bool for it. However, the user may enter variations of N and Y.
	// Thus I decided to go with character format to cover multiple cases just in case
        short shAge;
        short shPizzas;
	char chExercise;

        // Prompt the user to enter the age, number of pizzas per week,
	// and daily morning exercise
        printf("Please enter the age of the person (years): ");
        scanf("%hi", &shAge);

        printf("Please enter how many pizzas he eats per week: ");
        scanf(" %hi", &shPizzas);

        printf("Please mention whether he exercises daily in the morning: ");
        scanf("  %c", &chExercise);

        // Define the conditions using nested if-else
        if (shAge >= 20 & shAge < 25) {
                if (shPizzas < 7 & shPizzas >= 0) {
			// chExercise = 30 means 0 entered (which means False or No).
			// Also, chExercise = 78 means the user input is 'N' and 110 means 'n'
			if (chExercise == 30 | chExercise == 78 | chExercise == 110) {
				printf("The person is 'Fit'\n");
			}
			// chExercise = 31 means 1 entered (which means True or Yes).
                        // Also, chExercise = 89 means the user input is 'Y' and 121 means 'y'
			else if (chExercise == 31 | chExercise == 89 | chExercise == 121){
				printf("The person is 'Fit'\n");
			}
		}
		else {
			printf("The person is 'Unfit'\n");
		}
	}
	else  if (shAge >= 25 & shAge < 35) {
                if (shPizzas < 3 & shPizzas >= 0) {
                        // bExercise = 0 means No
                        if (chExercise == 30 | chExercise == 78 | chExercise == 110) {
                                printf("The person is 'Unfit'\n");
                        }
                        else if (chExercise == 31 | chExercise == 89 | chExercise == 121) {
                                printf("The person is 'Fit'\n");
                        }
                }
                else {
                        printf("The person is 'Unfit'\n");
                }
        }       
	else  if (shAge >= 35 & shAge < 40) {
                if (shPizzas <= 3 & shPizzas >= 0) {
                        // bExercise = 0 means No
                        if (chExercise == 30 | chExercise == 78 | chExercise == 110) {
                                printf("The person is 'Unfit'\n");
                        }
                        else if (chExercise == 31 | chExercise == 89 | chExercise == 121) {
                                printf("The person is 'Fit'\n");
                        }
                }
                else {
                        printf("The person is 'Unfit'\n");
                }
        }       
	else if (shAge >= 40 & shAge <= 50) {
                if (shPizzas <= 3  & shPizzas >= 0) {
                        // bExercise = 0 means No
                        if (chExercise == 30 | chExercise == 78 | chExercise == 110) {
                                printf("The person is 'Unfit'\n");
                        }
                        else if (chExercise == 31 | chExercise == 89 | chExercise == 121) {
                                printf("The person is 'Fit'\n");
                        }
                }
                else {
                        printf("The person is 'Unfit'\n");
                }
        }       
	else {
		printf("Please Enter a valid age (between 20 and 50 only)!\n");
	}


        return 0;
}
