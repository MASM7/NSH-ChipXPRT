#include <stdio.h>

typedef struct {
	int id;
	char name[50];
	float gpa;
} Student;


int main() {
	int n, i;

	printf("Enter the number of students: ");
	scanf("%d", &n);
	
	Student student[n];

	for (i=1; i<=n; i++) {
		student[i];

		printf("Enter the ID for student %d: ", i);
		scanf(" %d", &student[i].id);

		printf("Enter the name for student %d: ", i);
		scanf(" %s", &student[i].name[0]);

		printf("Enter the GPA for student %d: ", i);
		scanf(" %f", &student[i].gpa);
	}

	for (i=1; i<=n; i++) {
		printf("ID: %d, Name: %s, GPA: %.2f\n", student[i].id, student[i].name, student[i].gpa);
	}


	return 0;
}

