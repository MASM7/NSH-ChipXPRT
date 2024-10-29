#include <stdio.h>

int main() {
	int arInt[5];
	char arChar[5];
	short arShort[5];
	double arDouble[5];
	int i;
        
	printf("Integer Array:\n");
	for (i=0; i<5; i++) {
		printf("%p\n", &arInt[i]);
	}

	printf("Character Array:\n");
        for (i=0; i<5; i++) {
                printf("%p\n", &arChar[i]);
        }

        printf("Short Integer Array:\n");
        for (i=0; i<5; i++) {
                printf("%p\n", &arShort[i]);
        }

        printf("Double Array:\n");
        for (i=0; i<5; i++) {
                printf("%p\n", &arDouble[i]);
        }

	return 0;
}
