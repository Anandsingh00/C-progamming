#include<stdio.h>
int main(){
    int n=5; //for number of rows
    int x=1; //number  count
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}