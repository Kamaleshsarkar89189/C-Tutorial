//salting
//Find the salted of a password entered by user if the salt is "123" & added at the end.
#include<stdio.h>
#include<string.h>
void salting(char password[100]){
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password);
    strcat(newPass,salt);
    puts(newPass);
}
int main(){
    char password[100];
    scanf("%s",password);
    salting(password);
    return 0;
}