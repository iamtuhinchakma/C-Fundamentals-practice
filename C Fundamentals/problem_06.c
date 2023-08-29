/*
C program to convert centimeter ot meter and kilometer
*/
#include <stdio.h>
int main(){
    float centimeter, meter, kilometer;
    printf("Enter legnth in centimeter: ");
    scanf("%f", &centimeter);

    meter = (float) centimeter / 100;
    kilometer = centimeter / 100000.0;

    printf("Legnth in meter: %.2f\n", meter);
    printf("Length in kilometer: %.2f", kilometer);
    return 0;
}