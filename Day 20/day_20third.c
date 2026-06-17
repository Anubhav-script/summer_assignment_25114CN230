#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int arr[m][n];
    printf("Enter the elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Matrix[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }

    printf("\nRow-wise sums:\n");
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++)
            sum += arr[i][j];
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    printf("\nColumn-wise sums:\n");
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++)
            sum += arr[i][j];
        printf("Sum of column %d = %d\n", j + 1, sum);
    }
}
