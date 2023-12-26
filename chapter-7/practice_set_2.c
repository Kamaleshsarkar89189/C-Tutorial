// //Write a function to reverse an array.

// #include<stdio.h>
// void reserve(int arr[], int n);
// void printarray(int arr[], int n);
    
// int main(){
//     int arr[] = {1,2,3,4,5};
//     reverse(arr,5);
//     printarray(arr,5);
//     return 0;
// }
// void reverse(int arr[], int n){
//     for(int i=0;i<n/2;i++){
//         int firstvalue = arr[0];
//         int secondvalue = arr[n-i-1];
//         arr[i] = secondvalue;
//         arr[n-i-1] = firstvalue;
//     }
// }
// void printarray(int arr[], int n){
//         for(int i=0;i<n;i++){
//             printf("%d\t",arr[i]);
//         }
//      }  //or
    

    #include<stdio.h>
    void reverse(int *arr, int n){
        int temp;
        for(int i=0;i<(n/2);i++){
            temp = arr[i];
            arr[i] = arr[n-i-1];
            arr[n-i-1] = temp;
        }
    }
    int main(){
        int arr[] = {1,2,3,4,5,6,7,8,9,10};
        reverse(arr,10);
        for(int i=0;i<10;i++){
            printf("The value of %d element is: %d\n",i,arr[i]);
        }
        return 0;
    }