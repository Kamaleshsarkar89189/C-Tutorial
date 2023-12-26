/*
Strings
    Strin is a 1-D chracter array terminated by a null ('\0') --> this is null character
        null character denotes string termination character are stored in contiuous memory locations

Initialization Strings
    Since string is an array of characters, it can be initialized as follows:

            char name[] = {'K','A','M','A','L','E','S','H','\0'};

        There is another shortcut for initializin strins
        in c program:
            char name[] = "KAMALESH";  // in this case C adds a null character automitaically.

String In Memory

     A string is stored just like an array in the memory as shown below

        | K | A | M | A | L | E | S | H | \0 |
            Cntiguous block in memory



Printing Strings
    A string can be printed character by character usin printf and %c
    But there is another convenient way to print string in C.

        char name[] = "KAMALESH";
        pritnf("%s",name);  // prints the entire string.

Taking string input from the user
    We can use %s with scanf to take string input from the user:

            char str[20];
            printf("Enter your name")
            scanf("%s",str);
            printf("Your name is %s",str);

    Scanf automatically adds the null character when the enter key is pressed.

Note:
1. The string should be short enough to fit into the array
2.Scanf cannot be used to input multi-word strings with spaces


gets() and puts()

    gets() is a function which can be used to received a multi- word string.

    char str[30];
    gets(str);  //The entred string is stored in str

Multiple gets() calls will be needed for multiple strings
        Note: It is Danferous outdated function system, may be hacked by hacker
        So we have to use 'fgets' it is secure.

        fgets(str,n,stdin)  // stdin is (standard input)
        stop when n-1 char input or new line is entered



puts can be used to output a string.

     puts(str); //prints the string places the cursor on the nest line


Declaring a string using pointers
    We can declare string using pointers

        char *ptr = "KAMALESH";
    
    This tells the compiler to store the string in memory and assigned address is stored in a 
    char pointer

Note:
1.Once a string is defined using char str[] = "KAMALESH", It can't be reinitialize
to something else.

        #include<stdio.h>
        int main(){
            char *ptr = "KAMALESH";
            //char ptr[] = "KAMALESH";  
            ptr = "KISAN";  // it will be reinitialize as before
            printf("%s",ptr);
            return 0;
        }

2. A string defined using pointers can be reinitialize ptr = "KISAN";

Stander library function for strings
C provides a set of standard library functions for string manipulation.

    Some of the most commonly used string functions are:

    strlen()
    This function is used to count the number of character in the string excluding 
    the null('\0') character.

    int length = strlen(st);

        This functions are declared under <string.h> header file

        #include<stdio.h>
        #include<string.h>
        int main(){
            char *st = "KAMALESH";
            int a = strlen(st);
            printf("The lenght of string st is %d",a);
            return 0;
        }

    strcpy()
    This function is used to copy the content od second string into first passed to it.

        char source[] = "KAMALESH";
        char target[30];
        strcpy(target,source);  // target now continue "KAMALESH"

    Target string should have enough capacity to store the source string.

        
        #include<stdio.h>
        #include<string.h>
        int main(){
            char *st = "Kamalesh";
            char st2[20];
            strcpy(st2,st);
            printf("Now the st2 is %s", st2);
            return 0;
        }

      strcat()
      This function is used to concatenate two strings
        char s1[20] = "Kamales";
        char s2[] = "Sarkar";
        strcat(s1,s2);  // s1 now contains"KamaleshSarkar"

        #include<stdio.h>
        #include<string.h>
        int main(){
            char st1[20] = "Kamalesh";
            char st2 = "Sarkar";
            strcat(st1,st2);
            printf("Now the st1 is %s", st1);
            return 0;
        }



        strcmp()
        This function is used to compare two strings. Tt returns: 0 if strings are equal
        Negative value if first string is mismatching character ASCII value is not greater than 
        second strings coresponding mismathcing character. It returns positive value otherwise.

            

        #include<stdio.h>
        #include<string.h>
        int main(){
            char st1[20] = "Kamalesh";
            char st2 = "Kamalsh";
            int val = strcmp(st1,st2);
            printf("Now the val is %s", val);
            return 0;
        }