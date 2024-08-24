#include<stdio.h>
int main(){
    int n;
    printf("Enter a rows: ");
    scanf("%d",&n);

    int m;
    printf("Enter a columns: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){         //outer loop -> no. of lines
        for(int i = 1;i<=m;i++){   // no of stars in each line
        printf("*");
    }
        printf("\n");    
    }
    return 0;

}