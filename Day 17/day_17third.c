#include <stdio.h>
int main()
{
    int n, m;
    printf("Number of elements in first array: ");
    scanf("%d", &n);
    int arr1[n];

    printf("Number of elements in second array: ");
    scanf("%d", &m);
    int arr2[m];

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for (int j = 0; j < m; j++)
    {
        scanf("%d", &arr2[j]);
    }

    printf("Intersection of arrays: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                int exists = 0;
                for (int k = 0; k < i; k++)
                {
                    if (arr1[i] == arr1[k])
                    {
                        exists = 1;
                        break;
                    }
                }
                if (!exists)
                {
                    printf("%d ", arr1[i]);
                }
                break;
            }
        }
    }
}
