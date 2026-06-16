#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter the elements of matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int primarySum = 0, secondarySum = 0;
    for (int i = 0; i < n; i++)
    {
        primarySum += arr[i][i];
        secondarySum += arr[i][n - i - 1];
    }

    printf("Primary diagonal sum = %d\n", primarySum);
    printf("Secondary diagonal sum = %d\n", secondarySum);
}
