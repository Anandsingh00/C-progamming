#include<stdio.h>
int main(){
    int n;
      printf("Enter the size of array: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //reversing the array
        for(int i=0,j=n-1;i<=j;i++,j--){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        printf("Reversed array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}