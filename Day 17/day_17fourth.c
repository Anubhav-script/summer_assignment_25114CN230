#include <stdio.h>
int main()
{
    int n;
    printf("Number of elements in first array: ");
    scanf("%d", &n);
    int arr1[n];
    int m;
    printf("Number of elements in first array: ");
    scanf("%d", &m);
    int arr2[m];
    int k = 0;
    int arr[k];
    printf("Enter the elements in first array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements in second array: \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr[k] = arr1[i];
                k++;
            }
        }
    }
    printf("Common Elements of both array: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr[i]);
    }
}