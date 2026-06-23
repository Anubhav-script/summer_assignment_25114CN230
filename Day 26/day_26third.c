#include <stdio.h>

int main() {
    int pin, choice;
    int balance = 1000, amount;

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin == 1234) {
        while (1) {
            printf("\nATM Menu:\n");
            printf("1. Check Balance\n");
            printf("2. Deposit\n");
            printf("3. Withdraw\n");
            printf("4. Exit\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Balance: %d\n", balance);
            } else if (choice == 2) {
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                balance += amount;
            } else if (choice == 3) {
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                if (amount <= balance) {
                    balance -= amount;
                } else {
                    printf("Insufficient balance\n");
                }
            } else if (choice == 4) {
                printf("Thank you for using ATM\n");
                break;
            } else {
                printf("Invalid choice\n");
            }
        }
    } else {
        printf("Wrong PIN\n");
    }

    return 0;
}
