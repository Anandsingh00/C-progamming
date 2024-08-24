#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, digits = 0;
    double result = 0.0;

    originalNum = num;

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++digits;
    }

    originalNum = num;

    // Calculate Armstrong number
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    if ((int)result == num)
        return 1;
    else
        return 0;
}

int main() {
    int i;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for (i = 1; i <= 500; ++i) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
