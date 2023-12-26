//Write a program to take string as an input form the user using %c and %s confirm that
//the string are equal.

#include<stdio.h>
#include<string.h>

int main(){
    char st1[30];
    char st2[30];
    char c;
    int i = 0;

    printf("Enter the value of first string\n");
    scanf("%s",st1);
    printf("Enter the value of second string character by character\n");

    while(c!='\n'){
        fflush(stdin);  //this is help to take a input in the loop because without it's present the upper scanf input will execute or kiil the program before entering any charcter
        scanf("%c",&c);
        st2[i] = c;
        i++;
    }
    st2[i-1] = '\0';

    printf("The value of st1 is %s\n", st1);
    printf("The value of st2 is %s\n", st2);
    printf("strcmp for these strings returns %d\n", strcmp(st1,st2));
    return 0;
}