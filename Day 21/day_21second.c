int main()
{
    char str[100];
    int n = 0;
    int i = 0;
    char rev[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    while (str[n] != '\0')
    {
        n++;
    }
    while (n > 0)
    {
        rev[i] = str[n - 1];
        i++;
        n--;
    }
    rev[i] = '\0';
    printf("Reversed string is:\n%s\n", rev);
}