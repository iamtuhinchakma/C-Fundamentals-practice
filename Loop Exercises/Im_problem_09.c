/*
C program to count number of digits in an integer
*/
#include <stdio.h>
int main(){
    long long num;
    int count = 0;

    printf("Enter any number: ");
    scanf("%lld", &num);
    if( num == 0){
        count = 1;
    }
    while( num != 0){
        num = num / 10;
        count++;
    }
    printf("Total digits: %d", count);

    return 0;
}
