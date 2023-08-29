/*
C program to check whether an alphabet is vowel or consonant
*/
#include <stdio.h>
int main(){
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if ( ch == "a" || ch == "A" || ch == 'e' || ch == 'E' || ch == 'i' ||
    ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
        printf("'%c' is vowel", ch);
    } else if ( ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
        printf("'%c' is Alphabet!");
    } else if( ch >= '0' && ch <= '9'){
        printf("'%c' is digit!");
    }
    else {
        printf("'%c' is not an alphabet and it is special character", ch);
    }
    
    return 0;
}