#include <stdio.h>
#include <ctype.h>
#include "extra.h"

// Count the number of vowels in a string
void count_vowels(const char* str) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    printf("Number of vowels: %d\n", count);
}

