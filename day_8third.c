#include <stdio.h>
int main()
{
    int num;
    int ch = 0;
    printf("ENter number of rows: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            ch = j + 65;
            printf("%c", ch);
        }
        printf("\n");
    }
}