#include <stdio.h>
int main() {
	// Name printing
	char chName = 77;
        printf ("%c", chName);

        chName = 111;
        printf("%c", chName);

	chName = chName - 7;
        printf("%c", chName);

	chName = 97;
        printf("%c", chName);

	chName = 109;
        printf("%c", chName);

	chName = chName;
        printf("%c", chName);

	chName = chName - 8;
        printf("%c", chName);		
        
	chName = 'd';
        printf("%c\n", chName);


	
	// NID ID printing
	unsigned char uchNID1 = 49;
	printf("%c", uchNID1);

	unsigned char uchNID = uchNID1 - 1;
	printf("%c", uchNID);

	uchNID = uchNID1 + 8;
        printf("%c", uchNID);

	uchNID = uchNID1 + 3;
        printf("%c", uchNID);

 	uchNID = uchNID1 + 6;
        printf("%c", uchNID);

 	uchNID = uchNID1 + 3;
        printf("%c", uchNID);

 	uchNID = uchNID1 + 4;
        printf("%c", uchNID);

	uchNID = uchNID1;
        printf("%c", uchNID);

	uchNID = uchNID1 + 3;
        printf("%c", uchNID);

	uchNID = uchNID1 + 5;
        printf("%c\n", uchNID);


        return 0;

}        
