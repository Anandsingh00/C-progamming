#include<stdio.h>
int main(){
    int size,pos;
    int arr[50];

    printf("enter the size of array: ");
    scanf("%d ",&size);

    // storing elements in array
    printf("enter the array: ");
    for(int i = 0;i < size; i++){
        scanf("%d",&arr[i]);
    }
    // 3 2 6 1 8 
    printf("enter the position to delete the element ");
    scanf("%d",&pos);
    //pos = 2
    
    // code for deleting the element 
    for(int i = pos - 1;i < size;i++){
        arr[i] = arr[i+1];
    }
    size --;

    //printing the new array 
    for(int i = 0;i < size;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}