#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int *ptr2;
    ptr = (int *) malloc(6*sizeof(int));
    for(int i=0;i<6000; i++){
        ptr2 = (int *)malloc(6000 * sizeof(int));
        printf("Enter the value of %d element: ", i+1);
        scanf("%d", &ptr[i]);
        free(ptr2);  // you can see that this function free the space. For batter understanding go to file manager in your PC.
    }
    for(int i=0;i<6000;i++){
        printf("The value of %d element is: %d\n", i+1, ptr[i]);
    }
    return 0;
}