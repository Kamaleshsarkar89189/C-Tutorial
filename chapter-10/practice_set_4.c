//Write a program to read three integer from a file.

#include<stdio.h>

int main(){
    int a, b, c;
    FILE *ptr;
    ptr = fopen("threeint.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("the value of a, b and c is %d %d %d\n", a ,b, c);
    fclose(ptr);
    return 0;
}