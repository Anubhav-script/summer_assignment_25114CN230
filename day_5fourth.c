#include <stdio.h>

int main() {
    int n;
    printf("ENter the number to get its largest prime number: ");
    scanf("%d", &n);

    int largestPrime = -1;

    for (int i = n; i >= 2; i--) {
        if (n % i == 0) {
            int prime = 1;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    prime = 0;
                    break;
                }
            }
            if (prime) {
                largestPrime = i;
                break;
            }
        }
    }

    if (largestPrime != -1)
        printf("\nLargest prime factor of entered number is %d\n", largestPrime);
    else
        printf("No prime factors\n");

    return 0;
}
