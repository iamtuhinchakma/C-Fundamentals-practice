/*
C program to print alphabets from a to z
*/
#include <stdio.h>
int main(){
    char ch = 'a';

    while( ch <= 'z' ){
        printf("%c ", ch);
        ch++;
    }

    return 0;
}