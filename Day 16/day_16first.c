#include <stdio.h>
int main()
{
    int n;
    printf("number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i + 1] - arr[i] != 1)
        {
            printf("Missing number is %d", arr[i]+1);
        }
    }
}