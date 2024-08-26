#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int search;
    printf("Enter element to be searched in the array:");
    scanf("%d", &search);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("Element found at index: %d", i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Element not present in the current array.");
    return 0;
}