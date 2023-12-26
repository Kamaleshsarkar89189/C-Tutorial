#include<stdio.h>
  //step by step evaluation of 3*x/y-z+k  
int main(){
    int x,y,z,k;
    printf("Enter X:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    printf("Enter z:");
    scanf("%d",&z);
    printf("Enter k:");
    scanf("%d",&k);
    int result = 3*x/y-z+k;
    printf("The value of 3*x/y-z+k is %d",result);
    return 0;
}