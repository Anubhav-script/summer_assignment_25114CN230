#include <stdio.h>
#include <string.h>

int main() {
    char a[200], w[50], r[50];
    int i = 0, j = 0, max = 0;

    fgets(a, sizeof(a), stdin);

    while (a[i] != '\0') {
        if (a[i] != ' ' && a[i] != '\n') {
            w[j++] = a[i];
        } else {
            w[j] = '\0';
            if (strlen(w) > max) {
                max = strlen(w);
                strcpy(r, w);
            }
            j = 0;
        }
        i++;
    }

    printf("%s\n", r);
}
