#include<stdio.h>
int main(){
    int a = 6,b = 5;
    // printf("Enter two numbers: ",);
    // scanf("%d %d ",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d\n",a);
    printf("%d",b);
    return 0;
}