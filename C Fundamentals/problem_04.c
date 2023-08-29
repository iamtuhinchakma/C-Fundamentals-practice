/*
C program to find the perimeter of rectangel
*/
#include <stdio.h>
int main(){
    float length, width, perimeter;

    printf("Enter legnth of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);
    printf("The perimeter of the Rectangle is: %.2f", perimeter);
    
    return 0;
}