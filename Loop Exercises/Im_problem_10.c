/*
C program to find first and last digit of a number
*/
#include <stdio.h>
int main(){
    long long num;
    int firstDigit, lastDigit;

    printf("Enter any number: ");
    scanf("%lld", &num);

    lastDigit = num % 10;

    while( num >= 10){
        num = num / 10;
    }
    firstDigit = num;
    printf("First digit: %ld, Last digit: %ld\n", firstDigit, lastDigit);

    int sum = 0;
    sum = firstDigit + lastDigit;
    printf("Sum of %ld and %ld is %d", firstDigit, lastDigit, sum);
    return 0;
}
