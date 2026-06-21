#include <stdio.h>
#include <string.h>

int main() {
    char a[100], r[200];
    int i, j = 0, c;

    scanf("%s", a);

    for (i = 0; i < strlen(a); i++) {
        c = 1;
        while (i + 1 < strlen(a) && a[i] == a[i + 1]) {
            c++;
            i++;
        }
        r[j++] = a[i];
        j += sprintf(&r[j], "%d", c);
    }

    r[j] = '\0';
    printf("%s\n", r);
}