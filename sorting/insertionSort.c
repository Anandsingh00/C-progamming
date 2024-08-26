#include <stdio.h>
int main()
{

    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter your array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    char ch; // ch should be of type char
    printf("Enter A for ascending sorting OR B for descending sorting: ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case 'A':
        // Ascending sort (insertion sort)
        for (int i = 1; i < n; i++)
        {
            for (int j = i; j > 0; j--)
            {
                if (arr[j] < arr[j - 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
            }
        }
        break;

    case 'B':
        // Descending sort (insertion sort)
        for (int i = 1; i < n; i++)
        {
            for (int j = i; j > 0; j--)
            {
                if (arr[j] > arr[j - 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
            }
        }
        break;

    default:
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Array after selectionsort: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}