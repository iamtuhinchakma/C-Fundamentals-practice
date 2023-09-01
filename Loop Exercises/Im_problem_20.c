/*
C program to check whether a number is prime or not
*/
#include <stdio.h>
int main(){
    int num, isPrime = 1;

    printf("Enter any number: ");
    scanf("%d", &num);

    for( int i = 2; i <= num / 2; i++){
        if( num % i == 0){
            isPrime = 0;
            break;
        }
    }
    if( isPrime == 1 && num > 1){
        printf("%d is Prime number", num);
    } else{
        printf("%d is composit number", num);
    }

    return 0;
}
