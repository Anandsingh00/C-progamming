#include<stdio.h>
int main(){
    float cp;
    printf("Enter the cost price: ");
    scanf("%f",&cp);
    float sp;
    printf("Enter the selling price: ");
    scanf("%f",&sp);
    float diff = sp - cp;
    if(diff>0){
        printf("seller has made profit\n");
        printf("profit= %f",diff);
    }
    else{
          printf("seller has made loss\n");
        printf("loss= %f",diff);
        
    }
    return 0;
}