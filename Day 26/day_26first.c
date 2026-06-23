#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;

    srand(time(0));
    secret = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < secret) {
            printf("Too low! Try again.\n");
        } else if (guess > secret) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number!\n");
            break;
        }
    }

    return 0;
}
