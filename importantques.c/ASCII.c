#include <stdio.h>

int main() {
    int i = 0;

    printf("ASCII Values and Equivalent Characters:\n");
    while (i <= 255) {
        printf("ASCII value %d = Character %c\n", i, i);
        i++;
    }

    return 0;
}
