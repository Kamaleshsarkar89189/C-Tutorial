/*
Dynamic Memory Allocation
    C is a language with some fixed rules of program. For example: changing the size of
    an array is not allowed.

Dynamic Memory Allocation
    Dynamic memory allocation is a way to allocate memory to a data structure during the runtime.
    We can use DMA function available in C to allocate and free memory during runtime.

Function for DMA in C
    Following function are availabe in C to perform Dynamic memory allocation:

        1.malloc()
        2.calloc()
        3.free()
        4.realloc()

    1. malloc()
        malloc stands for memory allocation. It takes number of bytes to be allocate as an input and returns
        a pointer type of void.
        syntax: 

            ptr = (int *) malloc(12 * sizeof(int));  //int* --> casting void pointer to int. 12 --> space for 12 ints. sizeof(int) --> returns size of 1 int

        The expression returns a null pointer if the memory can't be allocated.

    2. calloc() Function
        calloc stands for continuaous allocation.
        It initializes each memory block with a default value of 0.
            
            syntax:

                ptr = (float*) calloc(30, sizeof(float));
                   //Allocates contiguous space in memory for 30 blocks(float)
        If the space is not sufficient, memory allocation fails and a NULL pointer is returns.

    3. free() Function
        We can use free() function to deallocate the memory.
        The memory allocated using calloc/malloc is not deallocated automatically.

        Syntax:

            free(ptr);  //Memory of ptr is released.


    4. realloc() function
        Sometimes the dynamically allocated memory is insufficient or more than required.

        'realloc' is used to allocate memory of new size using the previous pointer and size.

            Syntax:


                ptr = realloc(ptr, newsize);
                ptr = realloc(ptr, 3 * sizeof(int));
                            //ptr now points to this new block of memory capable of storing 3 integers. 