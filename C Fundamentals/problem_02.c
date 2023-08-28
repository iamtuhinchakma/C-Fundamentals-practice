/*
C program to add two numbers with manual input
*/
#include <stdio.h>
int main(){
    int number1, number2, sum = 0;

    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);

    /*
    Adding both number 
    */
   sum = number1 + number2;
   printf("The sume of %d and %d is: %d", number1, number2, sum);
   return 0;
}