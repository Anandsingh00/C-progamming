#include<stdio.h>
int add(int x , int y){
    return x+y;
}
int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    int result = add(a,b);
    printf("%d",result);
    return 0;
}
 