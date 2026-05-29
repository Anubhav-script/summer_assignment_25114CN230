//write a program to reverse a number
#include<stdio.h>
int main(){
    int num;
    int digit=1;
    int rev=0;
    printf("Enter the number of which you want to get the reverse: ");
    scanf("%d",&num);
    while(num!=0){
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    printf("reverse of given number is %d",rev);
}