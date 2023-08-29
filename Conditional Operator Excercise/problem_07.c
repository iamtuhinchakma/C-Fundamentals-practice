/*
C program to check whether a character is uppercase or lowercase
*/
#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
/*

    if( ch >= 'a' && ch <= 'z'){
        printf("'%c' is lowercase alphabet!");
    } else if( ch >= 'A' && ch <= 'Z'){
        printf("'%c' is Uppercase alphabet!");
    } else{
        printf("It is not an alphabet!");
    }
*/
// using library function
    if( islower(ch)){
        printf("'%c' is lowercase alphabet!");
    } else if( isupper(ch)){
        printf("'%c' is Uppercase alphabet!");
    } else{
        printf("It is not an alphabet!");
    }
    
    return 0;
}