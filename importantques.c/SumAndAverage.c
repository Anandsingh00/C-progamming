#include<stdio.h>
int main(){
    int n;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
       scanf("%d",&arr[i]);
    }
   
    int sum =0;
    for(int i =0;i<n;i++){
        sum+=arr[i];
    }
    printf("\nSum: %d",sum);
    int average = sum/n;
    printf("\nAverage: %d",average);
    return 0;
}