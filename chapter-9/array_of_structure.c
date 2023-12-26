#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};
int main(){
    struct employee facebook[100];
    //struct employee kamalesh = {100, 34.45, "Kamalesh"};  //we can also use this to init.
    facebook[0].code = 100;
    facebook[0].salary = 12234.78;
    strcpy(facebook[0].name, "Kamalesh");

    facebook[1].code = 100;
    facebook[1].salary = 12234.78;
    strcpy(facebook[1].name, "Kamalesh");

    facebook[2].code = 100;
    facebook[2].salary = 12234.78;
    strcpy(facebook[2].name, "Kamalesh");

    printf("Done");

    return 0;
}