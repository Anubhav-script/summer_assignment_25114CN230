// write a program to find if the number is prime or not
#include <stdio.h>
int main()
{
    int num;
    int prime = 1;
    printf("enter the number to check whether the number is prime or not: ");
    scanf("%d", &num);
    if (num > 1)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    else
    {
        prime = 0;
    }
    if (prime)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
}