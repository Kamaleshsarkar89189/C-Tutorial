/*
File I/O (File inout output)


    The Random Access Memory(volatile memory) is volatile and its content is lost 
    once the program terminates.In order to persist the data we use files.

    A file is data stored in a storage device. A C program can talk to the file
    by reading content from it and writing content to it.
    
    File pointer
       The "FILE" is a structure which needs to be created for opening
       the file.
    A file pointer is a pointer to this structure of the file. 
                    File pointer is needed for communication between the file and the program.

A file pointer can be created as follows:

    FILE *ptr;
    ptr = fopen("file.txt", "mode");

File opening modes in C
    C offer the programmers to select a mode for opening a file.
  Following mode are primarily used in C FILE I/O

    "r" --->open for reading
                            //If the file does not exist fopen returns NULL
    "rb"--->open for reading in binary


    "w" --->open for writing
                            //If the file exist,the contents will be overwritten
    "wb"--->open for writing in binary


    "a" ---> open for append  //If the file does not exist it will be created


    "r+"--->This mode will open a text file for both reading and writing
    "w+"--->Open a text file for both reading and writing. It first truncates
    the file to zero length if it exists, otherwise creates a file if it does not exist.

    "a+"--->Opens a text file for both reading and writing. It creates the file if it does not 
    exist. The reading will start from the beginning but writing can only append to file. 


    Types of file
        There are two types of Files:
        1.Text files (.txt, .c)
        2.Binary files (.jpg, .dat, .exe, .mp3)
    
    Reading a file
        A file can be opened for reading as follows:

        FILE *ptr;
        ptr = fopen("file.txt", "r");
        int num;


Let us assume that "text.txt" contains an integer .We can read that integer using:

            fscanf(ptr, "%d", &num);  //fscanf is file counterpart of scanf

        This will read an integer from file in num variable.


CLOSING the file
     It is very important to close the file after read or write. This 
     is acheived using fclose as follows:

        fclose(ptr);

This will tell the comliper that we are done working with this file and the associated
resources could be freed.

Writing to a file 
    We can write to a file in a very similar manner like we read the file

    FILE *ptr;
    ptr = fopen("text.txt", "w");
    int num = 89;
    fprintf(ptr, "%d", num);  //'fprintf' to write something in file as usually work 'printf'
    fclose(ptr);

    fgetc() and fputc()
        fgetc and fputc are used to read and write a character from a file

            fgetc(ptr)   // used to read a charcter form file

            fputc('c', ptr); //used to write character 'c' to the file


EOF : End of File
    fgetc returns EOF when all the character from a file have been read. So we
    can write a check like below to detect end of file

    while(1){
        ch = fgetc(ptr);
        if(ch == EOF){    //When all the content of a file has been read, break the loop!
            break;
        }
    }