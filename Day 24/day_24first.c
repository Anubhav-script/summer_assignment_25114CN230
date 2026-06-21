#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], temp[200];
    int i;

    scanf("%s", a);
    scanf("%s", b);

    strcpy(temp, a);
    strcat(temp, a);

    if (strstr(temp, b) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}