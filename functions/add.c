#include <stdio.h>
int add(int a, int b);
int main()
{
    int x = 5;
    int y = 6;
    int sum = add(x, y);
    printf("%d", sum);
    return 0;
}

int add(int a, int b)
{

    int d = a + b;
    return d;
}