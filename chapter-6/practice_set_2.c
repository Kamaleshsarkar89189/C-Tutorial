#include<stdio.h>
  //Write a program having a variable i. print the address of i. Pass this varible to a 
  //function and print its address. Are these address same? why;
void printAdd(int a ){
    printf("The address of  i is %u\n",&a);
}
int main(){
    int  i= 4;
    printf("The value of varoable a is %d\n",i);
    printAdd(i);
    printf("The addrss pf variable i is %u\n", &i);
    return 0;
}