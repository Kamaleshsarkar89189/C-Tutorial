/*
Function & Recursion


Function:
    Block of code that performs particular task
    
    Take Argument ---> Do Work --->Return Result

    it can be used multiple times
    increase code reusability

    A function can be reused by the programmer in a given program any number of times.

    Example and syntax of a Function

*/
    #include<stdio.h>
    
    void display();  // Function prototype

    int main(){
        int a;
        display(); // Function call
        return 0;
    }

    void display(){
        printf("Use of function"); //Function definition
    }

    /*
    Function Prototype:

        Function prototype is a way to tell the compiler about the function we are goint to define in the program.
        Here void indicates that the function returns nothing.


    Function Call:

        Function call is a way to tell the compiler to execute the function body at the time the call is made.
        Note: That the program execution starts from the main function in the sequence the intruction are written.


    Function Definition:

        This part contains the exact set of instructions which are executed during the function call when a 
        function is called from main(), the main function falls asleep and gets temporarily suspended.
        During this time the control goes to the function being called. When the function body is done executing main() resumes.

    */


    /*
    Important notes:

        -->Execution of a C program starts from main()
        -->A c program can have more than one function
        -->Every function gets called directly or indirectly from main()
        -->There are two types of function in C.

            Types of Functions

            1.Library function--> Commonly required functions grouped together in a library file on disk.

            2. User defined functions--> These are the functions declared and defined by the user.




            Why use function?

                1. To avoid rewriting the same logic agian and again.
                2. To keep track of what we are doin in a program.
                3. To test and check logiv independently.
    */

    /*
    Passing value to functions

        We can pass value to a function and can get a value in return from a function.

            int sum(int a, int b)
             
             The above prototype means that sum is a function which takes value a ( of type int) and b (of type int)
             and return a value of type int
    */

    /*
    Argument                     v/s                           Parameter

    values that are                             values in function 
    passed in function call                     declaration &             
                                                definition

    used to sent value                   used to receive value

    actual parameter                      formal parameter                        
    */

    /*
   <-- Recursion -->

        A function defined in c can call itself. This is  called recursion.
        or
        When a function calls itself, it's called  recursion

        A function calling itself is also called 'recursive' function.


        Example of Recursion

            A very good example of recursion is factorial

                factorial(n) = 1 x 2 x 3 .... x n
                factorial(n) = 1 x 2 x 3 ... n-1 x n
                factorial(n) = factorial(n-1) x n
            
            Since we can write factorial of a number in terms of itself, we can program it using recursion. 



            int factorial (int x){
                
                if(x == 0 || x ==1){
                return 1;
            }               // a program to calculate factorial using recursion
            else {
            f = x * factorial(x-1);
        return f;}
            }
    */
    
    /*
    How does it work?

            factorial(5)

        5 x factorial(4)
        5 x 4 x factorial(3)
        5 x 4 x 3 x factorial(2)
        5 x 4 x 3 x 2 x factorial(1)
        5 x 4 x 3 x 2 x 1
    */

    /*
    important note:

        1.Recursion is something the most direct way to code an algorithm
        2.The condition which doesnot call the function any further in a recursive is called as the base condition.
        3.Sometimes, due to a mistake made by the programmer, a recursive functiion can keep running without returnin resulting in a memory error. 
    */

    /*
    Properties of Recursion

        a. Anything that can be done with iteration, can be done with recursion and vice-versa
        b. Recursion can sometimes give the most simple solution.
        c. Base Case is the condition which stops recursion.
        d. Iteration has infinite loop & Recursion has stack overflow
    */

