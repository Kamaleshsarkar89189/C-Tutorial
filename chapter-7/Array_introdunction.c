
/*
       Arrays

       An array is a collection of similar elements,
       Collection of similar data types stored at contiguous memory locations.

            One variable => Capable of storing multiple values
        Syntax

            int marks[10];
            char name[10];
            float persentage[10];

        The value can now be assigned to marks array like this

            marks[0] = 12;
            marks[1] = 13;

    Note: It is very important to note that the array index starts with '0'
            it's called zero base indexy.

    Accessing elements
        Elements of an array can be accessed using:

        scanf("%d",&marks[0]);  //Input first value

        printf("%d",marks[0]); //Output first value of the array



Initialization of an array

        There are many other ways in which an array can be inititalized.

        int cpa[3] = {8,7,6,};  
        float marks[] = {40,45};

    Array in memory:
        Consider this array:

        int arr[3] = {1,2,3}  // 1 inteer=4 bytes

    This will reserve 4 x 3 = 12 bytes in memory, 4 bytes for each integer.



    Pointer Arithmatic
    A pointer can be increments to point to the next memory location of that type.
    
    Consider this example
    int i = 29;
    int *a =&i;  // a=56784    
    a++;  //new a = 56788

    char a = 'A';
    char *b = &a;  // a = 23450    
    b++;  //new b = 23451
    
    float i = 2.4;
    float *a = &i; //address of i or a = 23452
    a++;            //now a = 23456


        Follwing operation can be performed on pointer:

        1. Addition of a number to a pointer
        2. Subtraction of a number from a pointer
        3. Suntraction of one pointer from another
        4. Comparison of two pointer variables


    Accessing Array using pointers
        
        If ptr points to index 0, ptr++ will point to index 1 & so on... 


    This way we can have an integer pointer pointin gto first element of the array like this:
        int *ptr = &arr[0];  // or simply arr
        ptr++;
        
        

    Passing array to functions
        Array can be passed to the functions like this:

        printarray(arr,n);  ==>function call
        void printArray(int *i,int n); ==>function prototype
        void printArray(int i[], int n);


    Multidimentional Array
         An array can be of 2 dimension or 3 dimention or n dimentions

    A 2 dimention array can be defined as:

         int arr[3][2] = { {1 3} 
                           {2 4}
                           {5 8}};
    We can access the elements of this array as arr[0][0], arr

    2-D Array in memory
         A 2d array like a 1-D array is stored in contiguous memoru=y block like this:

                    | 1 | 3 | 2 | 4 | 5 | 8 |
        