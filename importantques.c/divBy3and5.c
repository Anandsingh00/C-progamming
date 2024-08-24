#include<stdio.h>
int main(){
    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    if(n%3==0 && n%5==0){
        printf("%d is divisible by 3 and 5",n);
        }
        else{
            printf("not divisible");
        }
    
    return 0;
}