#include<stdio.h>

int main(){
    char str[] = "KAMALESH";
    char *ptr = str;
    // char str[] = {'K','A','M','A','L','E','S','H','\0'};
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}