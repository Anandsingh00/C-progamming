#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int searchValue = 4;
    int found = 0; // Flag to track if the element is found

    for (int i = 0; i < 5; i++) {
        if (arr[i] == searchValue) {
            printf("%d found at index: %d\n", searchValue, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("%d not found\n", searchValue);
    }

    return 0;
}
