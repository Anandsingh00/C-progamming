//sum of n natural numbers
#include<stdio.h>
int sum(int n);
int main(){
    int number, result;
    printf("enter a positive number: ");
    scanf("%d",&number);
    result=sum(number);
    printf("sum=%d",result);
}
    int sum(int num){
        if(num==1){
        return 1;
        }
     else{
     return num +sum(num-1);
      }
    }