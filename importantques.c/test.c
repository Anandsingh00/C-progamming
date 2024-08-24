#include <stdio.h>

// Function that increments a value passed by reference
void incrementByReference(int *x) {
    (*x)++; // Modifying the value indirectly through the pointer
    printf("Inside function: %d\n", *x); // Prints modified value
}

int main() {
    int num = 10;
    
    printf("Before function call: %d\n", num); // Original value
    
    incrementByReference(&num); // Passing num by reference
    
    printf("After function call: %d\n", num); // Original value is changed
    
    return 0;
}

