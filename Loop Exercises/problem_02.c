/*
C program to print all natural numbers from n to 0
or print in reverse order
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Natural numbers from 0 to %d is: ", n);
    /*
        for ( int i = n; i >= 0; i-- ){
        printf("%d ", i);
    }
    */
   int i = n;
   while( i >= 0){
    printf("%d ", i);
    i--;
   }

    return 0;
}