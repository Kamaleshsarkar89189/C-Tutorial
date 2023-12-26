//Check if a given character is present in a string or not.
#include<stdio.h>
void checkChar(char str[], char ch){
    for(int i =0;str[i]!= '\0'; i++){
        if(str[i] == ch){
            printf("Character is present!");
            return;
        }
    }
    printf("Character is not present :()");
}
int main(){
    char str[] = "Kamalesh";
    char ch = 'a';
    printf("%s\n",str);
    checkChar(str,ch);
    return 0;
}