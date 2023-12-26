#include<stdio.h>
    //write a program to check if a student passed or failed.
int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);

    if(marks>=0 && marks<=30){
        printf("FAIL\n");
    }else if(marks>=30 && marks<=100){
        printf("PASS\n");
    }else{
        printf("Wrong marks");
    }

    //or you can use Ternary operator
    // marks <=30 ? printf("FAIL\n") : printf("PASS");
    return 0;
}