#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;  // base case
    } else if (n == 1) {
        return 1;  // base case
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // recursive calls
    }
}

int main() {
    int num, i;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci sequence: ");
    for (i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
