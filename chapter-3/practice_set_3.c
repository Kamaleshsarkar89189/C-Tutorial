#include<stdio.h>
//Write a program to find a character is upper case or lower case
int main(){
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <='Z'){
        printf("Upper Case\n");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("Lower Case\n");
    }else{
        printf("Not English Letter!\n");
    }
    return 0;
}