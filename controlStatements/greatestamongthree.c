#include<stdio.h>
int main(){
    int a,b,c;
   printf(" enter first number: ");
   scanf("%d",&a);
   printf(" enter second number: ");
   scanf("%d",&b);
   printf(" enter third number: ");
   scanf("%d",&c);

   if(a>b && a>c){
    printf("%d is the greatest number",a);
   }
   else{
    if(b>c && b>a){
        printf("%d is the greatest number",b);
    }
    else{
        printf("%d is the greatest number",c);
    }
   }
    return 0;
}