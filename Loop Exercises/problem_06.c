/*
C program to find sum of natural numbers from 1 to n
*/
#include <stdio.h>
int main(){
    int sum = 0;
    int n;
    printf("Enter upper limit: ");
    scanf("%d", &n);

    for ( int i = 1; i <= n; i++ ){
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}
