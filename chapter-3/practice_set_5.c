#include<stdio.h>
    //Write a c program to find out whether a student is pass or fail 
int main(){
    int math, chemistry,physics;
    printf("Enter math number: ");
    scanf("%d",&math);
    printf("Enter chemistry number: ");
    scanf("%d",&chemistry);
    printf("Enter physics number: ");
    scanf("%d",&physics);

    float total = (math + chemistry + physics)/3;

    if((total<40) || math <33 || chemistry <33 || physics <33){
        printf("Your total persentage is %.2f and you are fail\n", total);
    }
    else{
        printf("Your total persentage is %.2f and you are pass\n",total);
    }
    return 0;
}