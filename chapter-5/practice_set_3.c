#include<stdio.h>
    //Write a function to convert celsius to fahrenheit.
    float convertTemp(float celsius);
int main(){
   float far;
   printf("Enter celsius value: ");
   scanf("%f",&far);
   printf("Fahrenheit value is %.2f", convertTemp(far));
    return 0;
}
float convertTemp(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;
    }