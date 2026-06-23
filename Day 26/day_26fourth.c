#include <stdio.h>
#include <string.h>

int main() {
    char answer[20];
    int score = 0;

    printf("Welcome to the Quiz!\n");

    printf("Q1: What is the capital of India?\n");
    scanf("%s", answer);
    if (strcmp(answer, "Delhi") == 0) {
        score++;
    }

    printf("Q2: What is 2 + 2?\n");
    scanf("%s", answer);
    if (strcmp(answer, "4") == 0) {
        score++;
    }

    printf("Q3: Who is known as the father of C language?\n");
    scanf("%s", answer);
    if (strcmp(answer, "Dennis") == 0) {
        score++;
    }

    printf("Your final score is: %d\n", score);

    return 0;
}
