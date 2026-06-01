#include <stdio.h>
int main()
{
    int num, original;
    int digit;
    int n = 0;
    printf("Enter the number you want to check whether it is strong or not ");
    scanf("%d", &num);
    original=num;
    int product = 1;
    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        product = 1;
        for (int i = digit; i > 0; i--)
        {
            product = product * i;
        }
        n = n + product;
    }
    if (original == n)
    {
        printf("Entered number is strong number");
    }
    else
    {
        printf("Entered number is not a strong number");
    }
}