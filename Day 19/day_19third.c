#include <stdio.h>
int main()
{
    int m;
    printf("Enter number of rows in array: ");
    scanf("%d", &m);
    int n;
    printf("Enter the number of columns in array: ");
    scanf("%d", &n);
    int arr1[m][n];
    int arr[m][n];
    printf("Enter the elements of first array: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements at arr1[%d][%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = arr1[j][i];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}