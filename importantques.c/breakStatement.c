#include<stdio.h>
int main(){
    int n=10;
    for(int i =1;i<=n;i++){
     
        if(i == 6){

          continue;
        }
           printf("%d\n",i);
        
    }
   // printf("hello");
    return 0;
}