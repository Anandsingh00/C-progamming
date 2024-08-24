#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        n=-n;
        printf("%d",n);
    }
    else{
        printf("Absolute value is %d",n);
    }
    return 0;
}