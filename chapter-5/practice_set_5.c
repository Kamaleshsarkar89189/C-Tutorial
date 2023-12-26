#include<stdio.h>
    //What will the following line produce in a C program.
int main(){
    int a = 3;
    printf("%d %d %d", a, ++a, a++);  //in this case the value print right to left, it is how the complier read the value
    return 0;
}