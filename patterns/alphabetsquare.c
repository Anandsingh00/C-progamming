#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);             //n=3;
    
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            //ASCII VALUE OF A =65......
            //USING TYPE CASTE
            int d = a+64;            //d->65
            char ch=(char)d;         //ch=(char)65  -> ch ='A'
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
   return 0; 
}