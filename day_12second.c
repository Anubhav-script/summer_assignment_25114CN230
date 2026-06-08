#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isArmstrong(int num)
{
    int original = num, sum = 0, digits = 0, temp = num;

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0)
    {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
