/*
C program to find sum of digits of a number
*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);


    int sum = 0;
    while( num != 0 ){
        sum = sum + num % 10;

        // Removing last digit of a number
        num = num / 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
