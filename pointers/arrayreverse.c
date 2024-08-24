#include<stdio.h>
void rev(int *arr, int size){
    int *ptr;
    printf("Reverse order of array:\n");
    for(ptr = arr+size-1 ; ptr >= arr ; ptr--)
    printf("%d\n",*ptr);
}
int main()
{
    int i,a[5],*ptr;
    printf("Enter the array: ");
    for(ptr = a ; ptr <= a+4 ; ptr++)
    scanf("%d",ptr);

    rev(a,5);
    return 0;
}