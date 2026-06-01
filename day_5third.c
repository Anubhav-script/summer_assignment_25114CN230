#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to get its factors ");
    scanf("%d", &num);
    printf("Factor of %d is ", num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d, ", i);
        }
    }
    printf("%d.", num);
}