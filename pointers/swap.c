#include<stdio.h>
  void swapr(int *x, int *y);
int main(){
    int a = 10;
    int b = 20;
    swapr(&a,&b);
    printf("a = %d, b = %d",a,b);
    return 0;
    }

    void swapr(int *x , int *y){
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }