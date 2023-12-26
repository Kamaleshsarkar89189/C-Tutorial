#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
int main(){
    struct employee kamalesh = {100,234.23,"Kamalesh"};

    printf("Code is: %d\n", kamalesh.code);
    printf("Code is: %f\n", kamalesh.salary);
    printf("Code is: %s\n", kamalesh.name);
    return 0;
}