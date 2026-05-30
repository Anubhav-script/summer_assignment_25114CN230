// Write a program to Print prime numbers in a range
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the first number");
    scanf("%d", &num1);
    printf("Enter the last number");
    scanf("%d", &num2);
    for (int i = num1; i <= num2; i++)
    {
        if (i < 2)
        {
            continue;
        }
        int prime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}