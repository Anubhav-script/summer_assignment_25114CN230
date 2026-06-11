#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you want in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int newarr[n];
    for (int i = n - 1; i >= 0; i--)
    {
        newarr[i] = arr[n - 1 - i];
    }
    printf("elements of new array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", newarr[i]);
    }
}