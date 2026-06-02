#include <stdio.h>
int main()
{
    int num;
    printf("Enter a decimal number and get its binary number: ");
    scanf("%d", &num);
    int digit = 1;
    int sum = 0;
    while (num != 0)
    {
        digit = num % 2;
        sum = sum * 10 + digit;
        num = num / 2;
    }
    int rev = 0;
    int rem = 1;
    while (sum != 0)
    {
        rem = sum % 10;
        rev = rev * 10 + rem;
        sum = sum / 10;
    }
    printf("Binary number: %d", rev);
}