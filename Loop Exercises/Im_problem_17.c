/*
C program to find all factors of a number
*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    printf("All factors of %d are: ", num);
    for ( int i = 1; i <= num; i++){
        if( num % i == 0){
            printf("%d ", i);
        }
    }
    return 0;
}
