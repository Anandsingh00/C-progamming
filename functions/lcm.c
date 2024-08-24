#include<stdio.h>
int main(){
    int num1,num2,lcm,hcf, remainder,numerator,denominator;
    printf("Enter two numbers to find their LCM: ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
            numerator=num1;
            denominator=num2;
    }
    else{
         numerator=num2;
            denominator=num1;
    }
     while(denominator!= 0){
        remainder= numerator%denominator;
        numerator=denominator; 
        denominator=remainder;
     }
     hcf = numerator;
     lcm =(num1*num2)/hcf;
    printf("LCM of %d and %d is : %d\n",num1,num2,lcm);
    return 0;
} 
