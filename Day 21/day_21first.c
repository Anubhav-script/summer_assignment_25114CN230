#include<stdio.h>
int main(){
    char str[100];
    int n=0;
    printf("Enter the string: ");
    scanf("%[^\n]",str);
    while (str[n]!='\0')
    {
        n++;
    }
    printf("Length of the string is %d",n);

}