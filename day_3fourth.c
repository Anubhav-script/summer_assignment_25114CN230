#include <stdio.h>

int main()
{
    int num1, num2;
    printf("First number will be: ");
    scanf("%d", &num1);
    printf("Second number will be: ");
    scanf("%d", &num2);
    int lcm;
    lcm = (num1 > num2) ? num1 : num2;
    while (1)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
