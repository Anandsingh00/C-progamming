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
    printf("Array before selectionsort: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n - 1; i++)
    {
        int indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[indexOfMin] > arr[j])
            {
                int swap = arr[j];
                arr[j] = arr[indexOfMin];
                arr[indexOfMin] = swap;
            }
        }
    }
    printf("Array after selectionsort: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}