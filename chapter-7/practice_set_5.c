//Calculate a multidimentional array and print the address of its elements in increasing order
#include<stdio.h>

int main(){
    int arr[2][3][4][5][6];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                for(int l=0;l<5;l++){
                    for(int m=0;m<6;m++){
                        printf("The address of arr [%d][%d][%d][%d][%d] is %u\n",i,j,k,l,m,&arr[i][j][k][l][m]);
                    }
                }
            }
        }
    }
    return 0;
}