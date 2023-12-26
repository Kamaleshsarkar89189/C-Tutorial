//Write a program to read a text file character by character and write its content twice in a separate file.

#include<stdio.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    ptr = fopen("a.txt", "r");
    ptr1 = fopen("b.txt","w");

    char c = fgetc(ptr);
    while(c!=EOF){
        fputc(c, ptr1);
        fputc(c, ptr1);
        c = fgetc(ptr);
    }
    fclose(ptr);
    fclose(ptr1);

    return 0;
}