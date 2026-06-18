#include<stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];
    char ch;
    int vowel=0;
    int consonent=0;
    int i=0;
    printf("Enter the string: ");
    scanf("%[^\n]",str);
    int n=strlen(str);
    while (str[i] != '\0') {
        str[i] = tolower(str[i]);  
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        ch=str[i];
        if (ch>='a' && ch<='z')
        {
            if (ch=='a'|| ch=='e' || ch== 'i' || ch=='o' || ch=='u' )
            {
                vowel++;
            }
            else
            {
                consonent++;
            }
            
            
        }
        
    }
    printf("Number of vowel is %d\n",vowel);
    printf("Number of consonent is %d",consonent);
}