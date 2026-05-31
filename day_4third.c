#include <stdio.h>
int main()
{
    int digit, num, new;
    int n = 0, sum = 0;
    int d = 1;
    printf("number");
    scanf("%d", &num);
    new = num;
    int original = num;
    while (new != 0)
    {
        new = new / 10;
        n = n + 1;
    }
    for (int i = 0; i < n; i++)
    {
        digit = num % 10;
        d = 1;
        for (int i = 0; i < n; i++)
        {
            d = digit * d;
        }
        sum = sum + d;
        num = num / 10;
    }
    if (sum == original)
        printf("It is an Armstrong number\n");
    else
        printf("It is not an Armstrong number\n");
}