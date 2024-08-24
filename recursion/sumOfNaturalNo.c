//sum of first 20 natural numbers
#include<stdio.h>
int sum(int n);
int main(){
    int result = sum(20);
    printf("Sum of first 20 natural number = %d",result);
    return 0;
}
    int sum(int n){
        if(n==1){
            return 1;
        }
            else{
                return n + sum(n-1);
            }
        
    }