#include<stdio.h>
int main(){
//    float x  =22;
//    float y = 7;
//    float pi = x / y; 
//    printf("%f",pi);

    float r;
    printf("enter the radius of sphere: ");
    scanf("%f",&r);
    float pi = 3.14;
    float volume =(4*pi*r*r*r)/3;
    printf("the volume of sphere is : %.2f",volume);
    return 0;
}