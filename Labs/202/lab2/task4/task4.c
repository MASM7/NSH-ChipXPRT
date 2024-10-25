#include <stdio.h>

int main() {
        // Initialize variables
        float fBill;
	float fUnits;
	
        // Prompt the user to enter the number of units
        printf("Enter the number of electricity units consumed: ");
        scanf("%f", &fUnits);

        // Define the piece-wise regions using if-else
        // Then, do piece-wise linear interpolation between the nearest two points (larger one and smaller one)
        if (fUnits >=100 & fUnits < 200) {
                fBill = ((3600-1800) / (200-100)) * (fUnits-100) + 1800;
                printf("The elctricity bill is: %.0f PKR\n", fBill);
        }
        else if (fUnits >= 200 & fUnits < 250) {
                fBill = ((7500-3600) / (250-200)) * (fUnits-200) + 3600;
                printf("The elctricity bill is: %.0f PKR\n", fBill);
        }
        else if (fUnits >= 250 & fUnits < 350) {
                fBill = ((10500-7500) / (300-250)) * (fUnits-250) + 7500;
                printf("The elctricity bill is: %.0f PKR\n", fBill);
        }
        else if (fUnits >= 300 & fUnits < 400) {
                fBill = ((16000-10500) / (400-350)) * (fUnits-350) + 10500;
                printf("The elctricity bill is: %.0f PKR\n", fBill);
        }
        else if (fUnits >= 400 & fUnits <= 500) {
                fBill = ((30000-16000) / (500-400)) * (fUnits-400) + 16000;
                printf("The elctricity bill is: %.0f PKR\n", fBill);
        }


        return 0;
}
