#include<stdio.h>
int main(){
  int arr[4]={1,2,3,4};
  int n = 4;
  //code for reversing the whole array
  for(int i = 0; i< n/2 ; i++){
    // code for swapping two numbers
    int p = arr[i];
    arr[i]= arr[n-1-i];
    arr[n-1-i] = p;
  }
 
 for(int k = 0 ; k <= n-1; k++){
  printf("%d ",arr[k]);
 }
}