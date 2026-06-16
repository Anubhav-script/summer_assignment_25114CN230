#include <stdio.h>
int main()
{
    int m;
    printf("Enter the number of rows in array: ");
    scanf("%d", &m);
    int n;
    printf("Enter the number of columns in array: ");
    scanf("%d", &n);
    int arr1[m][n];
    printf("Enter the elements of first array: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements at arr1[%d][%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    int arr2[m][n];
    printf("Enter the elements of second array: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements at arr1[%d][%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    int arr[m][n];
    printf("Sum of both matrices are: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}