/*
C program to check whether a number is palindrome or not
*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    int originalNumber = num;
    int reverse = 0;
    while( num != 0 ){
        reverse = (reverse * 10) + (num % 10);

        // Removing last digit of a number
        num = num / 10;
    }
    if( reverse == originalNumber ){
        printf("%d is Palindrome!", originalNumber);
    } else{
        printf("%d is not Palindrome!", originalNumber);
    }

    return 0;
}
