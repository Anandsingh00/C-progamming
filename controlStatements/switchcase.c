#include<stdio.h>
int main(){
    char operator;
    printf("Enter an operator(+,-,*,/): ");
    scanf("%c",&operator);
    int a,b;
    printf("enter the two operands: ");
    scanf("%d %d",&a,&b);

    switch(operator)
    {
        case '+':
        printf("%d",a+b);
        break;

        case '-':
        printf("%d",a-b);
        break;

        case'*':
        printf("%d",a*b);
        break;

        case'/':
        printf("%d",a/b);
        break;

        default:
        printf("error! operator is not correct");
    }    
    return 0;
}