#include <stdio.h>
int main()
{
    int count = 0;
    int n;
    printf("enter the number of which you want to know the number of digit");
    scanf("%d", &n);
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    printf("%d",count);
}