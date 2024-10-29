#include <stdio.h>
#include <stdlib.h>

int main() {
        int i, j;
        int iRed, iGreen, iBlue, iRand;
        float ar_fGray[10][10];
        int ar_iRed[10][10];
        int ar_iGreen[10][10];
        int ar_iBlue[10][10];

        printf("The value of the Red array is:\n");
        for (i=0; i<10; i++) {
                for (j=0; j<10; j++) {
                        ar_iRed[i][j] = rand() % 256;
                        printf("%d\t ", ar_iRed[i][j]);
                }
                printf("\n");
        }

        printf("The value of the Green array is:\n");
        for (i=0; i<10; i++) {
                for (j=0; j<10; j++) {
                        ar_iRed[i][j] = rand() % 256;
                        ar_iGreen[i][j] = rand() % 256;
                        ar_iBlue[i][j] = rand() % 256;
                        ar_fGray[i][j] = 0.299 * ar_iRed[i][j] + 0.587 * ar_iGreen[i][j] + 0.114 * ar_iBlue[i][j];
                        printf("%d\t ", ar_iGreen[i][j]);
                }
                printf("\n");
        }

        printf("The value of the Blue array is:\n");
        for (i=0; i<10; i++) {
                for (j=0; j<10; j++) {
                        ar_iBlue[i][j] = rand() % 256;
                        printf("%d\t ", ar_iBlue[i][j]);
                }
                printf("\n");
        }

        printf("\n\n\nThe value of the Grayscale array is:\n");
        for (i=0; i<10; i++) {
                for (j=0; j<10; j++) {
                        ar_fGray[i][j] = 0.299 * ar_iRed[i][j] + 0.587 * ar_iGreen[i][j] + 0.114 * ar_iBlue[i][j];
                        printf("%d\t ", ar_iRed[i][j]);

                }
                printf("\n");
        }


        return 0;
}
