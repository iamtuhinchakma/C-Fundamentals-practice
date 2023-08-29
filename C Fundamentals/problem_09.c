/*
C program to find power of a number
*/
#include <stdio.h>
#include <math.h>
int main(){
    double base, expo; // base^expo
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &expo);

    double power;
    power = pow(base, expo);
    printf("%.2lf ^ %.2lf = %.2lf", base, expo, power);

    return 0;
}