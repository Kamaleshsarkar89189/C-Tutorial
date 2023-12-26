//Write a program to write all the odd number from 1 to n in a file.

#include<stdio.h>

int main(){
    FILE *ptr;
    FILE *fptr;
    ptr = fopen("odd.txt", "w");
    fptr = fopen("even.txt", "w");
    int n;
    printf("Enter number you want to read odd numbers: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i % 2 !=0){
            fprintf(ptr, "%d\t", i);
        }
        else{
        fprintf(fptr, "%d\t",i);
        }
    }
    
    fclose(ptr);
    fclose(fptr);
    return 0;
}