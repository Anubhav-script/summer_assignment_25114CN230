#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int a[256] = {0}, b[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    scanf("%99s", s1);
    printf("Enter second string: ");
    scanf("%99s", s2);

    if (strlen(s1) != strlen(s2)) {
        flag = 0;
    } else {
        for (i = 0; s1[i] != '\0'; i++) {
            a[(unsigned char)s1[i]]++;
        }
        for (i = 0; s2[i] != '\0'; i++) {
            b[(unsigned char)s2[i]]++;
        }
        for (i = 0; i < 256; i++) {
            if (a[i] != b[i]) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("Strings are anagrams\n");
    else
        printf("Strings are not anagrams\n");

    return 0;
}
