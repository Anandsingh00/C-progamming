#include<stdio.h>
int main(){
    int i=3,*x;         //*x is integer pointer
    float j=1.5,*y;     //*y is float pointer
    char k='c',*z;      //*z is character pointer

    printf("value of i is %d\n",i);
    printf("value of j is %f\n",j);
    printf("value of k is %c\n",k);

    x=&i;
    y=&j;
    z=&k;

    printf("original address in x is %u\n",x);
    printf("original address in y is %u\n",y);
    printf("original address in z is %u\n",z);

    x++;
    y++;
    z++;

    printf("new address in x is %u\n",x);
    printf("new address in y is %u\n",y);
    printf("new address in z is %u\n",z);

    return 0;
}