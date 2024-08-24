#include<stdio.h>
#include<limits.h>
int main (){
    int arr[5]={411,91,2,8,99};
    int max= INT_MIN;
    for(int i=0;i<=4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("the maximum number of array is %d",max);
    return 0;
}