#include <stdio.h>
int main()
{
    int m;
    printf("Number of elements in first array: ");
    scanf("%d", &m);
    int arr1[m];
    int n;
    int i = 0;
    int j = 0;
    printf("Number of elements in second array: ");
    scanf("%d", &n);
    int arr2[n];
    int arr[m + n];
    printf("Enter the elements in first array: \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements in second array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    while (i != m)
    {
        arr[i] = arr1[i];
        i++;
    }
    while (j != n)
    {
        arr[m + j] = arr2[j];
        j++;
    }
    /*for (int j = 0; j < m+n; j++)
    {
        printf("%d ", arr[j]);
    }*/
    for (int i = 0; i < m + n; i++)
    {
        for (int j = i + 1; j < m + n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < m + n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Elements in union of both arrays: ");
    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", arr[i]);
    }
}