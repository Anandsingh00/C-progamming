// program for inserting an element in array
#include<stdio.h>
int main(){
    int arr[50]= {1,3,9,6,2};
    int size = 5;
    int pos = 2; //pos=position at which the element is to be inserted
    // if(){
        
    // }
    // else{
    for(int i = size-1; i >= pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = 5;

    for(int i=0;i<=size;i++){
        printf("%d ",arr[i]);
    }
   // }
    return 0;
}