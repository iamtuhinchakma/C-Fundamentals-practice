/*
C program to find sum of even numbers between 1 to n
*/
#include <stdio.h>
int main(){
    int sum = 0;
    int n;
    printf("Enter upper limit: ");
    scanf("%d", &n);

    int i = 1;
    while( i <= n){
            if(i % 2 == 0){
                sum += i;
            }
        i++;
    }

    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}
