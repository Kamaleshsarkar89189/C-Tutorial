#include<stdio.h>
#include<string.h>

struct student{
    int code;
    float fee;
    char name[20];
};

int main(){
    struct student e1, e2, e3;
    printf("Enter the code of e1: ");
    scanf("%d", &e1.code);
    printf("Enter the fee of this semester: ");
    scanf("%f", &e1.fee);
    printf("Enter the name of the student: ");
    scanf("%s", e1.name);

    printf("Enter the code of e2: ");
    scanf("%d",&e2.code);
    printf("Enter the fee of this semester: ");
    scanf("%f",&e2.fee);
    printf("Enter the name of the student: ");
    scanf("%s",e2.name);

     printf("Enter the code of e3: ");
    scanf("%d",&e3.code);
    printf("Enter the fee of this semester: ");
    scanf("%f",&e3.fee);
    printf("Enter the name of the student: ");
    scanf("%s",e3.name);
    return 0;
}