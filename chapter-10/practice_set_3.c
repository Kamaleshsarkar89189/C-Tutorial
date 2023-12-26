// 2 numbers- a & b, are written in a file. Write a prpgram to replace them with their sum.

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("sum.txt", "r");

    int a;
    fscanf(ptr, "%d", &a);
    int b;
    fscanf(ptr, "%d", &b);
    fclose(ptr);

    ptr = fopen("sum.txt", "a+");
    fprintf(ptr,"%d\n", a+b);
    fclose(ptr);
    return 0;
}