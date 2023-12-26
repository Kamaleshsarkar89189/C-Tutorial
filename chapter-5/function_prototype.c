
/*
#include<stdio.h>

 int sum(int a, int b);  //function prototype declaration
int main(){
    int c;
    c = sum(3,5);   //function call
                        /* Parameters are the values or variable placeholder in the function defined. Ex ..a&b
                        Argument are the actual values passed to the function to make a call.Ex ..3&5.
                        
                        

    printf("The value of c is %d",c);
    return 0;
}
*/
 
/*
int sum(int a, int b){
    int c;
    c = a+b;        //function definition
    return c;
}
A function can return only one value at a time

If the passed variable is changed inside the function, the functiion call doesnot change the value in the calling function.


    int change(int a){
        a = 48;             //Missnomer
        return 0;
    }

    change is a function which changes a to 48. Now if we call it from main like this

    int b = 22
    change(b);    -->this value of b remains 22
    printf("b is %d", b);   -->prints "b is 22"

    This happens becouse a copy of b is passed to the change function
*/ 


#include<stdio.h>
#include<math.h>

 void calculatePrice(float value);
int main(){
    float value = 200.0;
    calculatePrice(value);
    printf("Value is : %f\n", value);
    return 0;
}

void calculatePrice(float value){
    value += (0.18*value);
    printf("Final price is: %f\n",value);
}