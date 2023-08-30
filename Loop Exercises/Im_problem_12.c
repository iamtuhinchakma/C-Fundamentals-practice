/*
C program to find product of digits of a number
*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);


    int product = 1;
    while( num != 0 ){
        product = product * (num % 10);

        // Removing last digit of a number
        num = num / 10;
    }
    printf("Product of digits = %d\n", product);
    return 0;
}
