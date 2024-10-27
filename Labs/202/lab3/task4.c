#include <stdio.h>

int main() {
	int iRow, iCol, i, j;
	char chDirection;
	printf("Enter the row of the initial position: ");
	scanf("%d", &iRow);
        printf("Enter the column of the initial position: ");
        scanf(" %d", &iCol);
	
	if ((iRow < 1 | iRow > 4) | (iCol < 1 | iCol > 1)) {
		printf("Error: Select an initial position within the boundaries (0-4).");
		
	}

        printf("Enter the direction (U, D, R, or L): ");
        scanf("%c", &chDirection);
	
	for (i=1; i <= 4; i++) {
		// 1 (U), 2 (D), 3 (R), and 4 (L)
		if chDirection 
	}
	

}
