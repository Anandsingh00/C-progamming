#include<stdio.h>
int main(){
     int n = 10;
    int arr[11]={6,1,7,3,2,5,4,8,9,9,10};
   
    int sum = 0;
    // loop for calculating the sum of numbers in array
    for(int i =0;i<=n;i++){
        sum += arr[i];
    }
   // sum = 64
    int s1 = n *(n + 1)/2;

    int duplicateNo = sum - s1;
    printf("the duplicate number is : %d\n",duplicateNo);
    printf("the indices are: ");
    for(int i=0;i<=n;i++){
        if(arr[i] == duplicateNo){
            printf("%d ",i);
        }

  }
    return  0;
}