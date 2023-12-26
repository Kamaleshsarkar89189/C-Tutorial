#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("student.txt", "w");

    char name[50];
    int age;
    float cgpa;
    int n;

    printf("Enter Name of the student: ");
    gets(name);
    // fgets(name, n, stdin);  //not work :(
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter cgpa: ");
    scanf("%f", &cgpa);

    fprintf(ptr, "Student name: %s\n",name);
    fprintf(ptr, "Age is: %d\n", age);
    fprintf(ptr, "cgpa is: %f\n", cgpa);
    printf("Data stored in stuedent.txt file!\n");
    fclose(ptr);
    return 0;
}