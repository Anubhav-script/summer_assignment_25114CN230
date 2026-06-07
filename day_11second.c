#include <stdio.h>

int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    result = maximum(x, y);
    printf("Maximum = %d\n", result);

    return 0;
}
