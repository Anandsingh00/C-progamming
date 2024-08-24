#include<stdio.h>
int main(){
    int arr[8]={11,33,42,71 ,26, 52, 69 ,81 };
    int n=8;
    // printing the array
    printf("before sorting the array:");
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }    
    // code for bubble sort
    for(int i= 0;i<n-1;i++){ //this loop is for number of passes
        for(int j =0;j<n-1-i;j++){
           if(arr[j]>arr[j+1]){
             int temp =arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
           }
        }
    }
    printf("\nafter sorting the array: ");
     for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }    

    return 0;
}