/*
C program to print all natural numbers from 1 to n
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Natural numbers from 0 to %d is: ", n);
    for ( int i = 0; i <= n; i++ ){
        printf("%d ", i);
    }
    return 0;
}