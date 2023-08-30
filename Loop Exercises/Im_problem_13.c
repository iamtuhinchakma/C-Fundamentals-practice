/*
C program to find reverse of a number
*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);


    int reverse = 0;
    while( num != 0 ){
        reverse = (reverse * 10) + (num % 10);

        // Removing last digit of a number
        num = num / 10;
    }
    printf("Reverse = %d\n", reverse);
    return 0;
}
