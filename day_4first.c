#include <stdio.h>
int main()
{
    int n;
    int first = 0;
    int second = 1;
    int next;
    printf("nth number will be");
    scanf("%d", &n);
    printf(" %d ", first);
    for (int i = 0; i < n; i++)
    {
        next = first + second;
        first = second;
        second = next;
        printf("%d ", first);
    }
}