// //Create a 2D array, storin the table of 2 & 3.
// #include<stdio.h>

// void storeTable(int arr[][10], int n, int m, int number){
//     for(int i=0;i<m;i++){
//         arr[n][i] = number*(i+1);
//     }
// }
// int main(){
//     int tables[2][10];
//     storeTable(tables,0,10,2);
//     storeTable(tables,1,10,3);

//         printf("2 number's table:\n");
//     for(int i=0;i<10;i++){
//         printf("%d\t", tables[0][i]);
//     }
//     printf("\n");

//         printf("3 number's table:\n");
//     for(int i=0;i<10;i++){
//         printf("%d\t", tables[1][i]);
//     }
//     return 0;
// }

#include<stdio.h>

void printTable(int *mulTable, int num, int n ){
    printf("The multiplication table of %d is:\n",num);
    for(int i =0;i<n;i++){
        mulTable[i] = num*(i+1);
    }
    for(int i =0;i<n;i++){
        printf("\t\t%dx%d = %d\n", num,i+1,mulTable[i]);
    }
    printf("*****************************************\n\n");
}
int main(){
    int mulTable[15][10];
    printTable(mulTable[0],10,10);
    printTable(mulTable[1],11,10);
    printTable(mulTable[2],12,10);
    printTable(mulTable[3],13,10);
    printTable(mulTable[4],14,10);
    printTable(mulTable[5],15,10);
    printTable(mulTable[6],16,10);
    printTable(mulTable[7],17,10);
    printTable(mulTable[8],18,10);
    printTable(mulTable[9],19,10);
    printTable(mulTable[10],20,10);
    printTable(mulTable[11],21,10);
    printTable(mulTable[12],22,10);
    printTable(mulTable[13],23,10);
    printTable(mulTable[14],24,10);

    return 0;
}