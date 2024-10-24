#include <stdio.h>

int main() {
	printf("Enter credit hours for English.\n");

	int numClasses = 5;
	float grade1;
	float grade2;
	float grade3;
	float grade4;
	float grade5;
	float GPA;

	scanf("%f", &grade1);
        scanf("%f", &grade2);
        scanf("%f", &grade3);
        scanf("%f", &grade4);
        scanf("%f", &grade5);
	
	int numCredit = numClasses * 3;
	GPA = (grade1 + grade2 + grade3 + grade4 + grade5)/numClasses;
	printf("The number of classes taken is %d.\n Number of credit hours is %.2d\n The GPA is %.2f.\n", numClasses, numCredit, GPA);

	return 0;

}
