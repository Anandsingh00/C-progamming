#include<stdio.h>
int main(){
    int arr[5]={78,22,99,87,53};
    int min = arr[0];

    for(int i=1;i<=4;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}