#include<stdio.h>
void swap(int a,  int b){
    int temp;
    temp = a;
    a = b ;
    b = temp;
    return;
}

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);

    int b;
    printf("Enter b: ");
    scanf("%d",&b);

   swap(a,b);
    
    printf("Value of a is %d\n",a);
    printf("Value of b is %d",b);
    return 0;
}