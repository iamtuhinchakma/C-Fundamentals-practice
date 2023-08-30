/*
C program to print multiplication table of a given number
*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter to print table: ");
    scanf("%d", &num);
    for( int i = 1; i <= 10; i++ ){
        int mult;
        mult = i * num;
        printf("%d * %d = %d\n", i, num, mult );
    }

    return 0;
}
