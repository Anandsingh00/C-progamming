#include<stdio.h>
int main(){
    int class[10];
    int n=10;
    int *p = class;
    int sum = 0;
    for(int i= 0;i<n;i++){
    scanf("%d",(p+i));
    sum = sum + *(p+i);
    }
    printf("%d",sum);
    return 0;
}