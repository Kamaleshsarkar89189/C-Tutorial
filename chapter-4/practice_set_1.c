#include<stdio.h>
    //print the sum of first n natural number.
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int sum = 0;
    

    //you can use multiple variable in loop

    for(int i=1, j=n;i<=n && j>=1; i++,j--){
        sum += i;
        printf("%d\n",j);
    }
    printf("sum of %d natural number is %d",n,sum);

    // for(int i= 1; i<=n;i++){
    //     sum += i; 
    //     printf("%d\n",i);
    // }
    // printf("Sum of n natural number is %d\n",sum);

    // for(int j = n; j>=1;j--){
    //     sum += j;
    //     printf("%d\n",j);
    // }
    return 0;
}