#include <stdio.h>
int main()
{
    int n;
    int k;
    printf("Enter the number of element array contains: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Sum of pair of elements should be: ");
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                printf("%d and %d are two number whose sum will be %d \n", arr[i], arr[j], k);
            }
        }
    }
}