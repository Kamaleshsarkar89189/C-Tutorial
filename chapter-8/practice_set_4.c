// //Write a program to count the occurence of a given character in string.

// #include<stdio.h>
// int occurence(char st[], char c){
//     char *ptr = st;
//     int count=0;
//     while(*ptr!='\0'){
//         if(*ptr==c){
//             count++;
//         }
//         ptr++;
//     }
// return count;
// }
// int main(){
//     char st[] = "Kamalesh";
//     int count = occurence(st, 'a');
//     printf("Occurences = %d", count);
//     return 0;
// }


#include<stdio.h>
int countVowels(char str[]){
    int count = 0;
    for(int i=0;str[i] != '\0';i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    return count;
}
int main(){
    // char str[]= "Kamalesh";
    char str[20];
    int n;
    printf("Enter your name: ");
    // gets(str);
    fgets(str,n,stdin);
    printf("Vowels are presents %d", countVowels(str));
    return 0;
}