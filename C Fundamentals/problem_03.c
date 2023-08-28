/*
C program to perform all arithmetic operations
*/
#include <stdio.h>
int main(){
    int num1, num2;
    int sum, sub, mult, mod;
    float div;

    printf("Enter any two number: ");
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float) num1 / num2; // typecasting
    mod = num1 % num2;

    printf("Sum = %d\n", sum);
    printf("Difference: %d\n", sub);
    printf("Product: %d\n", mult);
    printf("Quotient: %d\n", div);
    printf("Modulus: %d", mod);
    
    return 0;
}