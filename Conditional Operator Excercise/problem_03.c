/*
C program to check even or add number
*/
#include <stdio.h>
int main(){
    long long num;
    printf("Enter a number to check even or odd: ");
    scanf("%ld", &num);

    if( num % 2 == 0){
        printf("Even!");
    } else{
        printf("Odd!");
    }

    return 0;
}