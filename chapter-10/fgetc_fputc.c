#include<stdio.h>

int main(){
    FILE *ptr;
    //fgetc demo g=for reading a file
    // ptr = fopen("write.txt", "r");
    // char c = fgetc(ptr);
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    ptr = fopen("putcdemo.txt", "w");
    putc('c', ptr); // putc for writing character by character
    putc('c', ptr);
    putc('c', ptr);
    fclose(ptr);
    return 0;
}