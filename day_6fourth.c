#include<stdio.h>
int main(){
    int num;
    printf("Enter the base value: ");
    scanf("%d",&num);
    int n;
    printf("the power to the the base %d is: ",num);
    scanf("%d",&n);
    int product=1;
    for (int i=0;i<n;i++){
        product=product*num;
    }
    printf("Answer is %d",product);
}