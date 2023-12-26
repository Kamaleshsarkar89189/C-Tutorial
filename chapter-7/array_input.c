#include<stdio.h>

int main(){
    int marks[4];
    printf("Enter the marks of 1st student: ");
    scanf("%d",&marks[0]);
    printf("Enter the marks of 2nd student: ");
    scanf("%d",&marks[1]);

    printf("Enter the marks of 3rd student: ");
    scanf("%d",&marks[2]);
    printf("Enter the marks of 4th student: ");
    scanf("%d",&marks[3]);
    printf("The marks of 1st student is %d 2nd student marks is %d 3d is %d and 4th is %d",marks[0],marks[1],marks[2],marks[3]);
    return 0;
} 