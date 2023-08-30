/*
C program to print all even number from 1 to n
*/
#include <stdio.h>
int main(){
    int n;
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d is: ", n);

    int i = 0;
    while( i <= n){
        printf("%d ", i);
        i = i + 2;
    }

    return 0;
}
