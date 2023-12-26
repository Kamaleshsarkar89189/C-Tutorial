#include<stdio.h>
    // table of any number
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    for(int i=1;i<=10;i++){
        printf("%d\n",i*num);
    }
    printf("Done");
    return 0;
}