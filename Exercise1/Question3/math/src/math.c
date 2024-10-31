#include "math.h"

// Subtract elements of an array
int subtract_array(int arr[], int size) {
    int result = arr[0];
    for (int i = 1; i < size; i++) {
        result -= arr[i];
    }
    return result;
}

