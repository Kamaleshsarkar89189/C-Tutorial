#include<stdio.h>
    //print all numbers from 1 to 10 except for 4.
int main(){
    int i;
    for(i=1;i<=10;i++){
        if(i == 4){ //skip
            continue;
        }
        printf("%d\n",i);
    }
    
    return 0;
}