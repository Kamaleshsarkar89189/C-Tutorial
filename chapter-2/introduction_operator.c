

/*<--Instruction and operators-->
What is instruction : These are statements in a program
instructions are 3 types
1.Type Declaration Instructions
2.Arithmetic Instructions
3.Control Instructions
*/

/*Type declaration Instruction--->Declare var before using it
<--Valid-->
int a = 10; //type declaration instruction
int b = a;
int c =b+1;

int a,b,c;
a=b=c=1;



<---invalid instruction--->
int a = 29;//this all are error codes
int b = a;
int c = b+2;
int d = 2,r;

int a,b,c = 1;

*/ 

/*
Arithmetic Instructions
example:
a+b
here a,b is operend & '+' is operator
operands can be int,float etc.
+,-,*,/ are arithmetic operators
*/

int b = 4, c = 5;
int a;
a = b+c;//legal
b+c = a;//illegal(not allowed)

/*
% ---->Modular division operator
% ---->return the remainder
% ---->sign is same as of numerator(-5%2=-1)
*/

/*
Note:
No operator is asumed to be present
int i = ab --->invalid
int i = a*b --->valid

There is no operator to perfome exponentiation in C
however we can use pow(a,b)from <math.h>
*/

/*
Type Conversion
An Arithmetic operator between
int and int --->int
int and float --->float
float and float --->float

Note :
int a = 4.6; // in this case 4.6(float) will be denoted to 4(int) become a is not able to store floats.
float a = 5; // a will store 5.0(float)


quick quize:
int r = 3.0/9 value of r is 0 because r is an int, it cannot store float value 0.33 is denoted ot 0.

*/

/*
Operator Precedence in C:
In c language simple mathematical rules like BODMAS no longer applies.

Priority            operator
1st                 * / %
2nd                 + -
3rd                 =

Operator Associativity : When operator of equal priority  are present in an expression, the file is taken care of by associativity.


x*y/z =>(x*y)/z
x/y*z =>(x/y)*z

*, / follows left to right associativity
*/


/*
Control instruction 

Determines the flow of control in a program four types of control instruction in c are :
1.Sequence Control Instruction 
2.Decision Control Instruction 
3.Loop Control Instruction 
4.Case Control Instruction
*/

/*
Logical operators

    &&      AND
    ||      OR
    !       NOT

*/
/*
Operators
Assignment Operators
=       
+=      short hand operator     
a=a+b--->a+=b
both are return same value

-=       
*=
/=

*/