#include <stdio.h>
int main()
{
    int num;
    int count=0;
    int org;
    printf("Enter a decimal number and get its binary number: ");
    scanf("%d", &num);
    int digit = 1;
    int sum = 0;
    org=num;
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
    printf("Binary number: %d\n", rev);
    while (org != 0) {
        if (org % 2 == 1) {   
            count++;
        }
        org = org / 2;        
    }

    printf("Number of set bits: %d\n", count);
}