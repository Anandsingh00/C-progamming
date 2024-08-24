#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
     int ch;
    scanf("%c",&ch);
     int b;
    scanf("%d",&b);

    switch(ch){
         case '+':
            printf("%d",a+b);
            break;
            case '-':
            printf("%d",a-b);
            break;
            case '*':
            printf("%d",a*b);
            break;
            case '/':
            printf("%f",(float)a/b);
            break;
            default:
            printf("Invalid operation");
    }
    return 0;
}