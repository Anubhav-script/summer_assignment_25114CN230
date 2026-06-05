#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    for (int i = num; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}