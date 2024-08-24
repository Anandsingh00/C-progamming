#include<stdio.h>
int evenSum(int brr[],int size;){
    int sum1 = 0;
    for(int i = 0;i < size; i++){
        if(i%2 == 0){
          sum1 += brr[i];
        }      
    }
    return sum1;
}
int oddSum(int brr[], int size;){
        int sum2 = 0;
    for(int i = 0; i < size; i++){
        if(i % 2 != 0){
        sum2 += brr[i];
        }
    }
     return sum2;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    
    printf("sum even: %d ",evenSum(arr,size));
    printf("sum odd: %d ",oddSum(arr,size));
  
       return 0;
}