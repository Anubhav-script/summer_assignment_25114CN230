#include <stdio.h>

int main() {
    int num, sum = 0, base = 1, d;
    printf("Enter a binary number: ");
    scanf("%d", &num);

    while (num != 0) {
        d = num % 10;         
        sum = sum + d * base;  
        num=num/10;
        base = base * 2;      
    }

    printf("Decimal number: %d\n", sum);
    return 0;
}