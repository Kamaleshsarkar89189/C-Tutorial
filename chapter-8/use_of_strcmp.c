 #include<stdio.h>
        #include<string.h>
        int main(){
            char st1[20] = "Kamalesh";
            char *st2 = "Kamolsh";  // here 
            int val = strcmp(st1,st2);
            printf("Now the val is %d", val);
            return 0;
        }