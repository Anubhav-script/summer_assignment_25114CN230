#include<stdio.h>
int main(){
    int num,digit;
    int product=1;
    printf("enter thr number: ");
    scanf("%d",&num);
    while (num!=0)
    {
        digit=num%10;
        product*=digit;
        num=num/10;
    }
    printf("%d",product);
}