#include <stdio.h>
int main()
{
    int count = 0;
    int m;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int arr1[m][n];
    int arr[m][n];
    if (m != n)
    {
        printf("Number of rows should equals to number of columns");
        return 0;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Matrix[%d][%d]= ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = arr1[j][i];
        }
    }
    printf("Given matrix is: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t", arr1[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i][j] != arr[i][j])
            {
                count++;
                break;
            }
        }
    }
    if (count)
    {
        printf("Given matrix is not symmetric");
    }
    else
    {
        printf("Given matrix is symmetric");
    }
}