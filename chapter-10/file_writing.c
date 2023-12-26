#include<stdio.h>

int main(){
    FILE *ptr;
    int num = 89;
    ptr = fopen("write.txt", "w");
    fprintf(ptr, "The number is %d", num);
    fclose(ptr);
    return 0;
}