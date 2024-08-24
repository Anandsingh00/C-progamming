#include<stdio.h>
int main(){
  int arr[5];
  printf("enter your marks:");
  //taking input of an array
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }

   float sum;
    //storing the sum of an array in a variable called as sum
    for(int j =0;j<=4;j++){
        sum+=arr[j];
    }
    float div= sum/5;
    //displaying the output
    printf("%.2f",div);
    return 0;
}