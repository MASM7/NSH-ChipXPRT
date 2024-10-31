#include <stdio.h>
#include "math/src//math.h"
#include "io/src/io.h"
#include "utils/src/utils.h"
#ifdef EXTRA
#include "extra/src/extra.h"
#endif

int main() {
    int arr[5];
    int size = 5;

    // Get array elements from the user
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display array in reverse order
    printf("Array in reverse order:\n");
    display_reverse_array(arr, size);

    // Perform subtraction of elements in the array
    int result = subtract_array(arr, size);
    printf("Subtraction of array elements: %d\n", result);

    // If EXTRA=1, prompt user for a string and count vowels
    #ifdef EXTRA
    char sentence[100];
    printf("Enter a string to count vowels: ");
    scanf(" %[^\n]", sentence);  // Read a line of input including spaces
    count_vowels(sentence);
    #endif

    return 0;
}
