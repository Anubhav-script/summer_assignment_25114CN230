#include <stdio.h>
int main()
{
    int m1;
    printf("NUmber of rows for first array: ");
    scanf("%d", &m1);
    int n1;
    printf("NUmber of columns for first array: ");
    scanf("%d", &n1);
    int arr1[m1][n1];
    int m2;
    printf("NUmber of rows for second array: ");
    scanf("%d", &m2);
    int n2;
    printf("NUmber of columns for first array: ");
    scanf("%d", &n2);
    int arr2[m2][n2];
    int arr[m1][n2];
    if (n1 == m2)
    {

        printf("Enter elements of first matrix:\n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("Enter elements of second matrix:\n");
        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                arr[i][j] = 0;
            }
        }

        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                for (int k = 0; k < n1; k++)
                {
                    arr[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
    }

    else
    {
        printf("Not valid for matrix multiplication");
    }
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}