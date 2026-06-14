#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int temp;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int si = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[si])
            {
                si = j;
            }
        }

        temp = arr[si];
        arr[si] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array in descending order: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
