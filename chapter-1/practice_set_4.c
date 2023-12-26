#include<stdio.h>
//  celsius to Fahrenheit
int main(){
    float celsius;
    printf("Enter the value of celsius:");
    scanf("%f",&celsius);
    float fahr = (celsius*9/5)+32;
    printf("The value of this celsius in Fahrenheit is %.2f",fahr);
    return 0;
}