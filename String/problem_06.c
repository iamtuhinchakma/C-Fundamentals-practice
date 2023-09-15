/*
C program to find total number of alphabets, digits or special characters in a string
*/
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
void main(){
    char str[MAX_SIZE];

    printf("Enter any string: ");
    gets(str);

    int alphabets = 0, digits = 0, others = 0;

    int i = 0;
    while( str[i] != 0 ){
        if( str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            alphabets++;
        } else if(str[i] >= '0' && str[i] <= '9'){
            digits++;
        } else{
            others++;
        }
        i++;
    }
    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special Character = %d", others);
}
