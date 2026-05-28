#include <stdio.h>
int main()
{
    int n;
    int i;
    int factorial = 1;
    printf("factorial of ");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        factorial *= i;
    }
    printf("%d", factorial);
}