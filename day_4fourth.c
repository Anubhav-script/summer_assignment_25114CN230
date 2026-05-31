#include <stdio.h>

int main()
{
    int start, end;
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    for (int num = start; num <= end; num++)
    {
        int temp = num;
        int digits = 0;
        int sum = 0;

        while (temp != 0)
        {
            temp = temp / 10;
            digits++;
        }

        temp = num;
        while (temp != 0)
        {
            int digit = temp % 10;
            int power = 1;
            for (int i = 0; i < digits; i++)
            {
                power = power * digit;
            }
            sum = sum + power;
            temp = temp / 10;
        }

        if (sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}