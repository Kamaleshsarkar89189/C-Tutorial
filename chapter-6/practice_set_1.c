//Write a prpgram to print the address of a variiable. Use this address
//to get the value of this variable.
#include<stdio.h> 

int main(){
    int a = 3;
    int *ptr;
    ptr = &a;
    printf("The address of variable a is %u\n",ptr);
    printf("The value of variable a is %d\n", ptr);
    printf("The value of variable a is %d\n", *ptr);
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    // Print the random number
    printf("Random Number: %d\n", randomNumber);

    return 0;
}
*/
