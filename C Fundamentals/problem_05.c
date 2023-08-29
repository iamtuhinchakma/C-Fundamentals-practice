/*
C program to find diameter, circumference and area of a circle
*/
#define PI 3.1416
#include <stdio.h>
#include <math.h>
int main(){
    float radius, diameter, circumference, area;

    printf("Enter the radius of circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);

    printf("Diameter of circle = %.2f\n", diameter);
    printf("Circumference of cirlce: %.2f\n", circumference);
    printf("Area of circle: %.2f", area);
    
    return 0;
}