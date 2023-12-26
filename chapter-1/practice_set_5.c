#include<stdio.h>

int main(){
    int principal, rate, years;
    printf("Eneter principal: ");
    scanf("%d",&principal);
    printf("Eneter rate: ");
    scanf("%d",&rate);
    printf("Enter years:");
    scanf("%d",&years);
    int interest = (principal*rate*years)/100;
    printf("The value of interest is %d",interest);

    return 0;
}