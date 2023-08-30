/*
C program to find factorial of a number
*/
#include <stdio.h>
int main(){
    long long num;
    printf("Enter any number to calculate factorial: ");
    scanf("%d", &num);

    long long factorial = 1;
    for ( int i = 1; i <= num; i++){
        factorial = factorial * i;
    }

    printf("Factorial of %lld = %lld", num, factorial);
    return 0;
}
