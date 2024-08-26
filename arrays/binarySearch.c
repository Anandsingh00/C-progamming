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

    int lo = 0;
    int hi = n;
    printf("Enter the element to be searched in the array:");
    int search;
    scanf("%d", &search);
    while (lo <= hi)
    {
        int mid = (hi + lo) / 2;
        if (search == arr[mid])
        {
            printf("Element found at index %d", mid);
            break;
        }

        else if (search < arr[mid])
        {
            hi = mid - 1;
        }

        else
        {
            lo = mid + 1;
        }
    }
    if (lo > hi)
    {
        printf("Element not found in the array.\n");
    }
    return 0;
}