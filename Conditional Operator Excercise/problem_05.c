/*
C program to check whether the character is alphabet or not
*/
#include <stdio.h>
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    if ( ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
        printf("The character is Alphabet.");
    } else{
        printf("It is not Alphabet!!!");
    }
    return 0;
}