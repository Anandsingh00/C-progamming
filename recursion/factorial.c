#include<stdio.h>
int factorial(int c){
    if(c == 0){
        return 1;
    }
    else{
        return c * factorial (c - 1);
    }
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int x = factorial(n);
    printf("%d",x);

}