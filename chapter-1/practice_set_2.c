#include<stdio.h>
//area of ractangle 
int main(){
    int length, breadth;
    printf("Enter the length:");
    scanf("%d",&length);
    printf("Enter the breadth:");
    scanf("%d",&breadth);
    int area = length*breadth;
    printf("The area of ractangle is %d",area);
    return 0;
}