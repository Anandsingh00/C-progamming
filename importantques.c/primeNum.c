#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);

    for(int i =0;i<=n;i++){

        if(n%i == 0){
            count++;
        }
    }
    printf("number of factors: %d",count);
    return 0;
}