#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 4, 4, 3};
    int searchValue = 4;
    int found = 0; // Flag to track if the element is found
    int m=0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == searchValue) {
            printf("%d found at index: %d\n", searchValue, i);
            found ++;
           
        }
    }

    if (!found) {
        printf("%d not found\n", searchValue);
    }
     m = found;
    printf("\n%d", m);
    return 0;
}