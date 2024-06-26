/*
Loop Control Instructions

To repeat some parts of the program

Type of Loops
 
 Primarily, there are three types of loops in C language:
 1. while loop
 2. do while loop
 3. for loop

     We will look into these one by one

     1. while loop

     while(condition is true){
        //code                      --> The block keeps execuiting as long as the condition is true
     }

*/  
        /*
        #include<stfio.h>
        int main(){
            int a;
            scanf("%d", &a);
            while(a<10){
                //a = 11;
                //while(a>10) //this two lines will lead to an infinite loop
                printf("%d",a);
            a++;
            }
            return 0;
        }

        2. do while loop
        do{
            //do something
        }while(condition);

        code:
        */

        #include<stdio.h>
        
        int main(){
            int i = 1;
            do{
                printf("%d",i);
                i++; // for reverse i--
            }while(i<=10);
            return 0;
        }

        /*
        for loop

        for(initialization; condition; updation){
            //do somthing
        }



        code:
        
        #include<stdio.h>
        int main(){
            for(int i=1; i<=10; i=i+1){     // i is a iterator; counter
                printf("%d\n",i);
            }
        }
        */

        #include<stdio.h>
        
        int main(){
            //increment operator
            //++i (pre increment), i++ (post increnemt)
            //decrement operator
            // --i (pre decreament)
            // i-- (post decrement)
            int i =1;
            // printf("%d\n",i++);//use then increase
            // printf("%d\n",i); 

            // printf("%d\n",++i);//increase then use
            // printf("%d\n",i); 

            // printf("%d\n",i--);
            // printf("%d\n",i); 

            printf("%d\n",--i);
            printf("%d\n",i); 
            return 0;
        }



        /*
        continue statement

        skip to next iteration

        break statement in C
         it used to exit the loop whether the condition is true or false.
        */


        /*
        'do-while' loop works very similar to 'while loop'.
        while ----> check the condition & then execute the code
        d0-while ---> executes the code & then check the condition. 


        do-while loop = while loop which executes at least once.
        */

    