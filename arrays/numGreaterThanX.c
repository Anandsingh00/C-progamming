#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int count=0;
    for(int i=0;i<10;i++){
        if(arr[i]>4){
            count++;
        }
    }
    
    printf("The count of number greater than 4 is:  %d",count);
    return 0;
}