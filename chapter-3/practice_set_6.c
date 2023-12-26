#include<stdio.h>
    //Calculate income tax paid by an employee to the government as per the tax mentioned bellow:
    /*
    income slote        tax
    2.5 L - 5 L         5%
    5 L - 10 L          20%
    above 10 L          30%
    */
int main(){
    float tax = 0, income;
    printf("Enter salary: ");
    scanf("%f",&income);

    if(income >= 250000 && income<=500000){
        tax=tax + 0.05*(income-250000);
    }
    if(income >= 500000 && income <=1000000){
        tax =tax + 0.20*(income - 500000);
    }
    if(income >= 1000000){
        tax += 0.30*(income - 1000000);
    }
    printf("Your net income tax to be paid of thisi month is  %.2f\n",tax);
    return 0;
}