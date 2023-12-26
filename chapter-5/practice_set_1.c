#include<stdio.h>
    //Write a program with three function 
    //1. Good Morning
    //2. Good afternoon
    //3. Good night

    void goodMorning();
    void goodAfternoon();
    void goodNight();
int main(){
     goodMorning();
     goodAfternoon();
     goodNight();
    return 0;
}
void goodMorning(){
    printf("Good Morning!\n");
}

void goodAfternoon(){
    printf("Good Afternoon\n");
}

void goodNight(){
    printf("Good Night\n");
}