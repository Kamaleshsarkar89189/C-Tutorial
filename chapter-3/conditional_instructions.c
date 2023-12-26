/*
Conditional Statements
types---->
if-else         switch


if- else use
if(condition){
    //do something if TRUE
}
else{
    //do something if FALSE
}

#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);

    if(age>18){
        printf("Adult\n");
        printf("Can vote\n")
    }
    else{
        printf("not adult");
    }
}
*/



/*
else-if use

if(condition){
    //do something if true
}
else if(condition){
    //do something if 1st is FALSE & 2nd is TRUE
}


example:
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);

    if(age >== 18){
        printf("Adult\n");
    }
    else if(age > 14 && age < 14){
        printf("Teenager\n");
    }
    else{
        printf("Child");
    }
    return 0;
}
*/


/*
Conditional operator

A short hand 'if else' can be written using the condition or ternary operator

Ternary
Condition? expression if true : expression if false
--->Here '?' is Ternary Operator

*/

/*
Code example:
#include<stdio.h>
int main(){
    int a;
    printf("Enter a \n");
    scanf("%d",&a);
    //one liner
    (a<6) ? printf("a is less then 6") : printf("a is not less then 6");
}
*/

/*
switch

Switch case is used when we have to make a choise between number of alternative for a given variable.

code example:
*/
#include<stdio.h>
int main(){
    int option;
    printf("Enter any option (1-3)");
    scanf("%d",&option);

    switch(option){
        case 1:
        printf("Your option is 1\n");
        break;

        case 2:
        printf("Your option is 2\n");
        break;

        case 3:
        printf("Your option is 3\n");
        break;

        default :
        printf("Invalid option\n");
        break;
    }

}
 
 /*
 Conditional Operators

 switch Properties
 a. Case can be in any order

 b. Nested switch(switch inside switch) are allowed
 
 

 code example:

 */

 #include<stdio.h>
 int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);

    if(num>=0){
        printf("Positive number\n");
        if(num % 2 == 0){
            printf("Even number\n");     // is called nested function.
        }else{
            printf("Odd number\n");
        }
    }
 }
 
