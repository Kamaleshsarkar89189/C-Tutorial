//Enter address(house no, block no, city, state) of 4 people.

#include<stdio.h>

typedef struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
void printAdd(struct address add){
    printf("Address is : %d, %d, %s, %s\n",add.houseNo,add.block,add.city,add.state);
}
int main(){
    struct address add[4];
    //input
    printf("Enter House no person 1: ");
    scanf("%d", &add[0].houseNo);
    printf("Enter the block number: ");
    scanf("%d",&add[0].block);
    printf("Enter the city: ");
    scanf("%s",add[0].city);
    printf("Enter the state: ");
    scanf("%s",add[0].state);

    printf("Enter House no person 2: ");
    scanf("%d", &add[1].houseNo);
    printf("Enter the block number: ");
    scanf("%d",&add[1].block);
    printf("Enter the city: ");
    scanf("%s",add[1].city);
    printf("Enter the state: ");
    scanf("%s",add[1].state);

    printf("Enter House no person 3: ");
    scanf("%d", &add[2].houseNo);
    printf("Enter the block number: ");
    scanf("%d",&add[2].block);
    printf("Enter the city: ");
    scanf("%s",add[2].city);
    printf("Enter the state: ");
    scanf("%s",add[2].state);

    printf("Enter House no person 4: ");
    scanf("%d", &add[3].houseNo);
    printf("Enter the block number: ");
    scanf("%d",&add[3].block);
    printf("Enter the city: ");
    scanf("%s",add[3].city);
    printf("Enter the state: ");
    scanf("%s",add[3].state);

    printAdd(add[0]);
    printAdd(add[1]);
    printAdd(add[2]);
    printAdd(add[3]);

    return 0;
}