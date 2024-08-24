#include<stdio.h>
int main(){
    int n,x,y,z;
    printf("Enter the maximum limit of the Fibonacci series: ");
    scanf("%d",&n);
    x=0;
    y=1;
    z=0;
    for(int i=1;i<=n;i++){
        printf("%d ",z);
        x=y;
        y=z;
        z=x+y;
    }
    return  0;
}