#include<stdio.h>
int main(){
    int arr[3];
    printf("Enter the numbers in the array:\n");
   for(int i=0;i<3;i++){
     scanf("%d",&arr[i]);
   }
   printf("the third element of  the array is %d",arr[2]);
    return 0;
}