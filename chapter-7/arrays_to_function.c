#include<stdio.h>

// void printArray(int *ptr,int n){
//     for(int i=0;i<n;i++){
//         printf("The value of element %d is %d\n",i+1,*(ptr+i)); 
//     }
// }  
//or you can use
void printArray(int ptr[],int n){
    for(int i=0;i<n;i++){
        printf("The value of element % is %d\n",i+1,ptr[i]);
    }
    ptr[2] = 333;  //This value will be changed in arr array of main as well
}
int main(){
    int arr[] = {1,2,3,4,556,65};
    printArray(arr, 6); // if enterd 7 ,8... it will execute but return a garbage value
    printf("%d",arr[2]);
    return 0;
}