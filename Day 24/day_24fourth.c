#include <stdio.h>
#include <string.h>

int main() {
    char a[100], r[100];
    int i, j = 0;
    int seen[256] = {0};

    scanf("%s", a);

    for (i = 0; i < strlen(a); i++) {
        if (!seen[(unsigned char)a[i]]) {
            seen[(unsigned char)a[i]] = 1;
            r[j++] = a[i];
        }
    }

    r[j] = '\0';
    printf("%s\n", r);

    return 0;
}
