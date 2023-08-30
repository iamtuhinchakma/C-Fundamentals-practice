/*
C program to print alphabets from a to z
*/
#include <stdio.h>
int main(){
    char ch;

    for ( ch = 'z'; ch >= 'a'; ch-- ){
        printf("%c ", ch);
    }

    return 0;
}