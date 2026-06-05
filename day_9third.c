#include <stdio.h>
int main()
{
    int num;
    printf("Enter number of rows: ");
    scanf("%d", &num);

    for (int i = num; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", 65 + j);
        }
        printf("\n");
    }
}