#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int a[256] = {0};
    int i, max = 0;
    char ans = '\0';

    printf("Enter a string: ");
    scanf("%99s", s);

    for (i = 0; s[i] != '\0'; i++) {
        a[(unsigned char)s[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (a[i] > max) {
            max = a[i];
            ans = (char)i;
        }
    }

    if (ans != '\0')
        printf("Maximum occurring character: %c\n", ans);
    else
        printf("No character found.\n");

    return 0;
}
