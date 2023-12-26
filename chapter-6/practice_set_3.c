  // Write a program using a function which calculates the sum and average of 
  //two numbers. Use pointer and print the value of sum and average in main()

#include<stdio.h>

void sumaverage(int a ,int b, int *sum, float *avg){
    *sum = a+b;
    *avg = (float)(*sum)/2;
}
int main(){
    int i ,j, sum;
    float avg;
    i = 2;
    j = 7;
    sumaverage(i, j, &sum, &avg);
    printf("The value of sum is %d\n",sum);
    printf("The value of average is %f", avg);
    return 0;
}