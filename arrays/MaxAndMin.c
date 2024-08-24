#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={1,2,3,4,5};

    //code for finding the maximum number in the array
    int max = INT_MIN ;
    for(int i = 0 ; i <= 4 ; i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    printf("Max Number in  the array is : %d",max);


    
    return 0;
}