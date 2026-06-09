#include <stdio.h>
int main()
{
    int a;
    printf("enter the number of elements you want to enter in array:");
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("enter the elements of arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d", arr[i]);
    }
}