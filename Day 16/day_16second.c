#include <stdio.h>
int main()
{
    int n;
    printf("ENter number of element you want to enter: ");
    scanf("%d", &n);
    int arr[n];
    int freq1 = 0;
    int ans = -1;
    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int freq = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    freq++;
                }
                if (freq >= freq1)
                {
                    ans = arr[i];
                }
            }
        }
        if (freq >= freq1)
        {
            freq1 = freq;
        }
    }
    printf("Frequency is %d\n", freq1);
    printf("Element with maximum frequency is %d", ans);
}