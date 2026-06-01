#include<stdio.h>
int main(){
    int sum=0;
    int num;
    int digit=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num-1;i++){
        digit=num%i;
        if (digit==0){
            sum=sum+i;
        }
    }
    if (num==sum){
        printf("Given number is perfect number");
    }
    else
    printf("Given number is not perfect number");
}