#include<stdio.h>
int main(){
    int arr[4]= {1,2,3,4};
    int brr[4]= {7,8,9,10};

    printf("Before Swapping: \n");
    printf("arr: ");
    for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }
    printf("\nbrr: ");
     for(int i=0;i<4;i++){
        printf("%d ",brr[i]);
    }
    for(int i=0;i<4;i++){
        int swap = arr[i];
        arr[i]=brr[i];
        brr[i]=swap;
    }
    printf("\nAfter Swapping: \n");
      printf("arr: ");
    for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }
      printf("\nbrr: ");
     for(int i=0;i<4;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}