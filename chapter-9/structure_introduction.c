/*  Structures

<<<---Array and strings ==> Similar data(int, float,char)
<<<---Structures can hold ==> Dissimilar data

Syntax for creating structures
A C structure can be created as follows:

    struct employee{
        int code;    //this declares a new user defined data-type!
        float salary;
        char name[20];
    };  //semicolon is important

We can use this user defined data type as follows:
 
    struct employee e1;   // creating a structure variable
    strcpy(e1.name, "Kamalesh");
    e1.code = 100;
    e1.salary = 34.78;

    So a structure in C is a collection of variables of different types under a single name.


    Quick Quiz: Write a program to store the details of 3 employee from user defined data. Use the 
    structure declared above.

    Why use structure?
    =>We can create the data types in the employee structure separately but when the number of properties 
    in a structure increases, it becomes difficult for us to create data variables without structures. In a 
    nut shell:

    (a) Structure keep the data organized.
    (b) Structures make data mangement easy for the programmer.

Array of structures 
Just like an array of integers, an array of floats and an array of character ,
we can create an array of structures.

        struct employee facebook[100]; //==>An array of structures

We can access the data using:
facebook[0].code = 100;
facebook[1].code = 101;
and so on...


Initializing structures
    Structures can also be initialized as follows:
    
    struct employee Kamalesh ={100,34.45, "Kamalesh"};

    struct employee kisa ={0}; //==>All elements set to 0

    Structure in memory
      Structure are stored in contiguous memory locations for the structure e1 of type struct employee, memory 
      layout looks like this:

      | 100 | 545.67 | "Kamalesh" |
address=>68810  68814  68818

    In an array of structures , these employee instances are stored adjacent to each other.

        
Pointer to Sturctures

        struct employee *ptr;
        ptr =&e1;
        Now we can print structure elements using:
        printf("%d", (*ptr).code);

     Arrow operator
        Insted of writing (*ptr).code, we can use arrow operator to access
        structure properties as follows

            (*ptr).code or ptr->code
            Here -> is known as the arrow operator.

Passing Structure to function
    A structure can be passed to a function just like any other data type.

    void show(struct employee e); //=>Function prototype


Typedef keyword
    We can use the typedef keyword to create an alias name for data types in c.
    typedef in more commonly used with structures.

        struct complex{
            float real;  //struct complex c1, c2; for defining complex numbers
            float img;
        };

        typedef struct complex{
            float real;
            float img;   //CompNo c1, c2; for defining complex numbers
        } compNo;