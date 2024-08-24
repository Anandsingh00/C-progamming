#include<stdio.h>
int main(){
    int arr[50],size;
    printf("enter the size of array: ");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    arr[4] = 0 ;
    printf("the elements in the array are: \n");
    
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}