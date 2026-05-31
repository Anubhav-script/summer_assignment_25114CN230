#include <stdio.h>

int main() {
    int n;
    int first = 0, second = 1, next;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("The %dth Fibonacci term is %d\n", n, first);
        return 0;
    }
    if (n == 1) {
        printf("The %dth Fibonacci term is %d\n", n, second);
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }

    printf("The %dth Fibonacci term is %d\n", n, second);
    return 0;
}
