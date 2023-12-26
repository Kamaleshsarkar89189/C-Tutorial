//Write a program to encrypt a string by 1 to the ASCII value of its characters.

#include<stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr+1;//for deccrypt the function only use *ptr-1
        ptr++;
    }
}
int main(){
    char c[] = "Hi my name is Kamalesh";
    encrypt(c); //decrypt(c);
    printf("Encrypted string is: %s",c);
    return 0;
}