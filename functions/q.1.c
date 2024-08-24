//program to add, subtract,multiply and divdie two integers using user defined function with return type
#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int multiply(int a,int b);
float divide(int a,int b);

int main(){
    int a,b;
    char ch;
    printf("Enter the operation(+,-,*,/) and two numbers");
    scanf("%c %d  %d",&ch,&a,&b);
    switch(ch)
    {
        case '+':
        printf("%d + %d = %d",a,b,add(a,b));
        break;
         case '-':
        printf("%d - %d = %d",a,b,sub(a,b));
        break;
         case '*':
        printf("%d * %d = %d",a,b,multiply(a,b));
        break;
         case '/':
         if(b!=0){
        printf("%d / %d = %d",a,b,divide(a,b));
                 }
               else{
                printf("denominator can't be zero.");
                   }
        break;
        default:
        printf("invalid choice");
    }
    return 0;  
}
    int add(int a,int b)
    {
        return a+b;
    }
    int sub(int a,int b)
    {
        return a-b;
    }
    int multiply(int a,int b)
    {
        return a*b;
    }
    float divide(int a,int b)
    {
        return a* 1.0/b;
    }