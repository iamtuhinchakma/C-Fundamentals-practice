/*
C program to printf all prime number from 1 to n
*/
#include <stdio.h>
int main(){
    int n, isPrime;

    printf("Enter any number: ");
    scanf("%d", &n);

    for( int num = 1; num <= n; num++){
        isPrime = 0;
        for( int j = 2; j <= num / 2; j++){
            if( num % j == 0){
                isPrime++;
                break;
            }
        }
        if( isPrime == 0 && num != 1){
            printf("%d ", num);
        }
    } 

    return 0;
}
