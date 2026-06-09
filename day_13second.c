#include <stdio.h>
int main()
{
    int a;
    int sum = 0;
    printf("enter the number of elements you want to enter in array: ");
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("enter the element at arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        sum = sum + arr[i];
    }
    float n = sum / a;
    printf("sum of elements of array= %d", sum);
    printf("average of elements of array= %d", n);
}