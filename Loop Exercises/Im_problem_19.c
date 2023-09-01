/*
C program to find GCD and LCM of two numbers
*/
#include <stdio.h>
#include <stdlib.h>

void gcd( int x, int y){
    if( x == 0 ){
        return y;
    } else{
        return gcd(y % x, x);
    }
}


int main(){
    int num1, num2;
    printf("Enter any two number: ");
    scanf("%d%d", &num1, &num2);

    int ans;
    ans = gcd(num1, num2);

    printf("GCD is : %d", ans);
    return 0;
}
