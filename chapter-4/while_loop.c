#include<stdio.h>

int main(){
    int a;
    printf("enter the value 1-20: ");
    scanf("%d",&a);
    int i = 0;
    while(i<=20){
        if(i>=10){
        printf("The value of i is %d\n",i);
        }
        i++;  // i = i + 1   ( print Before, after increment)
        //  ++i    (increment before, after print)
    }
    return 0;
}