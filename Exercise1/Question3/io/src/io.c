#include <stdio.h>
#include "io.h"

// Display an array in reverse order
void display_reverse_array(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

