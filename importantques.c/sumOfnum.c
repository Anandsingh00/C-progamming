#include<stdio.h>
int main(){
    int n = 1653;
    
    int sum =0;
    int rem;
    while(n!=0){
        rem = n%10;
        sum+=rem;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}