#include <stdio.h>

int sumOfDigits(int n) {
    if (n < 10) {
        return n;  // base case
    }
    return (n % 10) + sumOfDigits(n / 10);  // recursive call
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
    return 0;
}
