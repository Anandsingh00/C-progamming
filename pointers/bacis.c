#include<stdio.h>
void swap(int*x , int* y){
    int temp =*x;
    *x = *y;
    *y = temp;
    return ;
}
int main(){
    int a =5;
    int b= 6;
    printf("before swap a&b : %d %d\n",a,b);
    swap(&a,&b);
    printf("after swap a&b : %d %d\n",a,b);
    return 0;
}