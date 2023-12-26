#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
int main(){
    // int a = 23;
    // char b = 'k';
    // float d = 23.56;
    // employee e1;
    //e1.salary = 23.56; --->Won't word without employee structure
    struct employee e1;
    e1.code = 100;
    e1.salary = 78.89;
    // e1.name = "Kamalesh"; ---> wont work
    strcpy(e1.name, "Kamalesh");

    printf("%d\n",e1.code);
    printf("%.2f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}