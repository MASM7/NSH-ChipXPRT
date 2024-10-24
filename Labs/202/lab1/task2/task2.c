#include <stdio.h>

int main() {
	int intNum_1_1 = 35;
	int intNum_1_2 = 5;
	
	int intNum_2_1 = 36;
	int intNum_2_2 = 7;
	
	int intNum_3_1 = 18;
	int intNum_3_2 = 32;
	int intNum_3_3 = 6;
	int intNum_3_4 = 3;
	
	int intNum_4_1 = 220;
	int intNum_4_2 = 5;

	int intNum_5_1 = 27;
	int intNum_5_2 = 7;
	int intNum_5_3 = 3;
	int intNum_5_4 = 8;
	int intNum_5_5 = 3;

	// S.No.1
	printf("%d\n", intNum_1_1 / intNum_1_2);
	// S.No.2
	printf("%d\n", intNum_2_1 / intNum_2_2);
	// S.No.3
        printf("%d\n", intNum_3_1 - intNum_3_2 / intNum_3_3 * intNum_3_4);
	// S.No.4
        printf("%d\n", intNum_4_1 / intNum_4_2);
	// S.No.5
        printf("%d\n", intNum_5_1 - intNum_5_2 % intNum_5_3 + intNum_5_4 / intNum_5_5);

	return 0;
}
