#include <stdio.h>

int main()
{
    int num1, num2;
    int gcd = 1;

    printf("First number will be: ");
    scanf("%d", &num1);
    printf("Second number will be: ");
    scanf("%d", &num2);
    int min = (num1 < num2) ? num1 : num2;
    for (int i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    return 0;
}
