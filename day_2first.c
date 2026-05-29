// Write a program to find sum of digits of a number
#include<stdio.h>
int main(){
    int num;
    int digit=1;
    int sum=0;
    printf("Enter the number for the sum: ");
    scanf("%d",&num);
    while(num!=0){
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("Sum of digit of given number '%d' is %d",num,sum);
}