#include <stdio.h>
int main()
{
    int n;
    printf("Enter the numbe rof elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int si = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[si])
            {
                si = j;
            }
        }
        {
            temp = arr[si];
            arr[si] = arr[i];
            arr[i] = temp;
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}