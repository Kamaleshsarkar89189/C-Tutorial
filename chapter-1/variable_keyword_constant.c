

/*what is variable: A variable is a container which store a "value" 
or variable is the name of a memory location which store some data.
Rule for naming variable in c:
1.First character must be alphabet or underscore(_)
2.No comma,blanks allowed.
3.No special symbol other than (_)allowed.
4.Variable names are case sensetive.*/

#include<stdio.h>//header file(preprocessor director)

int main(){
    int number = 10;
    char star = '*';//(character must be closed within single inverted commas)
    int age = 20;
    float pi = 3.14;

    int a = 20;//case sensetive
    int A = 30;

    int _age = 20;

    int final_price = 200;
    return 0;
}


/*Constant
Values that don't change(fixed)
3 types
    a. integer cons 1,2,3,0,-1,-2
    b. real cons 1.0, 2.0,3.14,-3.4
    c. character cons 'a','b','A','#','&'*/



/*Keyword
There are 32 keywords available in C

auto           double         int        struct     
break          long           else       switch
case           return         enum       typedef
char           register       extern     union
const          short          float      unsined
continue       signed         for        void
default        sizeof         goto       volatic
do             static         if         while */



/*Comments
Line that are not part of program
a. Single line //
b. Multiple line /**/


/*output
printf("")
CASES 
1. integers
printf("%d", age);
int main(){
    int age = 20;
    printf("Age is : %d",age);
}
2. real numbers
printf("%f",pi);
int main(){
    float pi = 3.14;
    printf("%f",pi);
}
3. characters
printf("%c";star);
int main(){
    char hashtag = '#';
    printf("%c",hashtag);
}*/


/*Input
scanf("%d",&age);
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
}*/

/*Compilation
A computer program that translates c code
A compiler is a computer program which converts a c program into machine language ,it can be easily understood by the computer.*/


/*Library Function

%d for integers 
%c for charaters 
%f for floats*/