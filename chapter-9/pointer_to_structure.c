#include<stdio.h>

struct employee{
    int code;
    float salary;
    char name[20];
};
int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 102;  // both are same...
    ptr->code = 102;
    printf("%d", e1.code);
    return 0;
}