#include <stdio.h>
int main()
{
    int n, sum = 0, i = 0;
    printf("enter the natural number for sum of first n natural number: ");
    scanf("%d", &n);
    while (i != n + 1)
    {
        sum += i;
        i += 1;
    }
    printf("sum of first  %d natural number is %d", n, sum);
    return 0;
}