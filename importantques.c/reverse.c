#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     int rem;
        int reverse =0;
    while(n!= 0){
        rem = n%10;
        reverse = reverse *10+ rem;
        n/=10;
    }
    printf("%d",reverse);
    return 0;
}