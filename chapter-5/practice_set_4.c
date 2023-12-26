#include<stdio.h>
    // Write a function to print n terms of the fibonacci sequence.
     int fibonacci(int n);
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Fibonacci sequence is %d",fibonacci(num));
    return 0;
}
int fibonacci(int n){
    //Base case: factorial of 0 is 1
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNm1 = fibonacci(n-1);
    int fibNm2 = fibonacci(n-2);
    int fibN =fibNm1 + fibNm2;
    // printf("Fib of %d is : %d\n",n, fibN);
    return fibN;
}