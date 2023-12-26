#include<stdio.h>
  //write a function to calculate area of a square, circle & rectangle.
  float squareArea(float side);
  float circleArea(float rad);
  float rectangleArea(float a, float b);
int main(){
    float a,b;
    float side;
    float rad;
    printf("Enter radius: ");
    scanf("%f",&rad);
    printf("Circle area is : %f", circleArea(rad));
    // printf("")
    // printf("Enter side: ");
    // scanf("%f",&side);
    // printf("Squere area is :%f",squareArea(side));
    // printf("Enter a:");
    // scanf("%f",&a);
    // printf("Enter b:");
    // scanf("%f",&b);
    
    // printf("Area is :%f\n", rectangleArea(a,b));
     
    return 0;
}
float squareArea(float side){
    return side*side;
}
float circleArea(float rad){
    return 3.14*rad*rad;
}
float rectangleArea(float a, float b){
    return a*b;
}