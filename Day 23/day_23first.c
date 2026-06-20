#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int a[256] = {0};
    int i;
    char ans = '\0';

    printf("Enter a string: ");
    scanf("%99s", s);

    for (i = 0; s[i] != '\0'; i++) {
        a[(unsigned char)s[i]]++;
    }

    for (i = 0; s[i] != '\0'; i++) {
        if (a[(unsigned char)s[i]] == 1) {
            ans = s[i];
            break;
        }
    }

    if (ans != '\0')
        printf("First non-repeating character: %c\n", ans);
    else
        printf("No non-repeating character found.\n");

    return 0;
}
