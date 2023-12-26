
/*
Pointers

    A pointer is a variable that stores the memory address of another variable 

    Syntax

        int age = 20;
        int *ptr = &age;  // '*' value of address, '&' address of
        int _age = *ptr;

        The address of(&) operator
            The address of operator is used to obtain the address of a given variable.
            
 Declaring Pointers

    int *ptr;  //int age = 20;
    char *ptr; //char star = '*';
    float *ptr; //float price = 200.00;


  Format Specifier
        Formate specifier for printing pointer address is '%u'
        The value at address operator (*)
        The value at address or * operator is used to obtain the value present at a given memory address. It is denoted by *

    printf("%p",&age);  // %p --> Hexadecimal, %u unsigned int

    printf("%p",ptr);

    printf("%p",&ptr);




  Pointer to pointer 
    <<--A varible that stores the memory address of another pointer-->>
    Just like j is pointing to i or storing the address of i, we can have another variavle k which can further store the address of j. What wiil be the type of k

        int **k;
        k = &j;

        We can even go further one level and create a variable l of type int *** to store the address of k . We mostly use int * and int ** sometimes in real world programs.


        Type of Function Calls

        Based on the way we pass arguments to the function, function calls are of two types

        1. Call by value---->Sending the value of arguments
        2. Call by reference--->Sending the address of arguments

       
       
       
        <---Call by value--->

        We pass value of variable as argument
*/

/*
        #include<stdio.h>
        int sum(int a, int b);
        int main(){
            int a = 4, b = 9;

            printf("The value of 4+9 is %d\n",sum(a,b));
            printf("The value of a and b is %d and %d\n", a,b);
            return 0;
        }
        int sum(int a, int b){
            int c;
            c = a+b;
            b = 234;  //they wiil be ignored what ever you input in a , b . The return value is always executes which declared in main function.
            a = 234;  // its is the exampel of call by value
            return c;
        }

        

        int c = sum(3,4); ----> asume x = 3 and y = 4

        if sum is defined as sum(int a, int b); the values 3 and 4 are copied to a and b. Now even if we change a and b,
         nothing happens to the variable x and y.
         This is call by value.
          In C we usually make a call by value.



*/
    // <<Call by reference>>
    //  We pass the address of variable as argument
    
#include<stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main(){
    int x = 4, y = 6;
    printf("The value of x and y before swap is %d and %d\n",x,y);
    // wrong_swap(x,y); //will not work due to call by value
    swap(&x,&y); //will work due to call by value
    printf("The value of x and y after swap is %d and %d\n",x,y);
    return 0;
}
void wrong_swap(int a, int b){
        int temp;
        temp =a;  // it does not swap the variable--<->
        a = b;
        b = temp;
}
void swap(int *a, int *b){
        int temp;
        temp =*a;
        *a = *b;
        *b = temp;
}
    
        // Here the address of the variable is passed to the function as arguments
        //Now since the address are passed to the function the function 
        // can now modify  the value of a variable in calling function usinng
        // * and & operator. Example is discussed above

        /*
        This function is capable of swaping the values passed to it if 
        a = 4 and b = 6 before a call to swap(a,b), a = 6 and b = 4 after 
        calling swap
        */



/*          
#include<stdio.h>
int main(){
    int age = 20;
    int *ptr = &age;

    //address 
    printf("%p\n" );
    
    printf("%u\n",&age);

    printf("%u\n", ptr);

    printf("%u\n", &ptr);

    //value print 

    printf("%d\n",age);

    printf("%d\n",*ptr);

    printf("%d\n",*(&age)); 
    return 0;
}


*/
