#include<stdio.h>
typedef int* pointer;
int main(){
    int x=7,y=5;
    pointer a=&x,b=&y;

    printf("%p\n",a);
    printf("%p\n",&b);
    return 0;
}