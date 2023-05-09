#include <stddef.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;  // NULL pointer check
    }
    
    for (size_t i = 0; i < size; i++) {
        if (array[i] == value) {
            return i;  // found value at index i
        }
    }
    
    return -1;  // value not found in array
}
