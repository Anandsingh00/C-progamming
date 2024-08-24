#include<stdio.h>
int main(){
    int ram,shyam, ajay;
    printf("Enter the age of ram: ");
    scanf("%d",&ram);
     printf("Enter the age of shyam: ");
    scanf("%d",&shyam);
     printf("Enter the age of ajay: ");
    scanf("%d",&ajay);
   
   if(ram<shyam && ram<ajay){
    printf("Ram is the youngest");
   }
   else{
    if(shyam<ram && shyam<ajay){
          printf("shyam is the youngest");
    }
    else{
        printf("ajay is the youngest");
    }
   }
    return 0;
}