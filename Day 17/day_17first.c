#include <stdio.h>
int main()
{
    int m;
    printf("number of elements in first array: ");
    scanf("%d", &m);
    int arr1[m];
    int n;
    printf("number of elements in second array: ");
    scanf("%d", &n);
    int arr2[n];
    int arr[m + n];
    printf("Enter the elements of first array: \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of second array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < m; i++)
    {
        arr[i] = arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i + m] = arr2[i];
    }
    printf("The elements of merge array: ");
    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", arr[i]);
    }
}