#include <stdio.h>

int main() {
    // Declaring an integer array with 5 elements
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Declaring a pointer and pointing it to the first element of the array
    int *ptr = arr;

    printf("Displaying array elements using pointer arithmetic:\n");

    for (int i = 0; i < 5; i++) {
        // (ptr + i) calculates the address of the next element
        // *(ptr + i) dereferences that address to get the value
        printf("Element at index %d: %d\n", i, *(ptr + i));
    }

    return 0;
}