/*
C program to find reverse of a string
*/
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
void main(){
    char str[MAX_SIZE], reverse[MAX_SIZE];
    int i, strIndex, revIndex, len;

    printf("Enter any string: ");
    gets(str);

    i = 0;
    while( str[i] != '\0'){
        i++;
    }

    len = i;

    revIndex = 0;
    strIndex = len - 1;
    while( strIndex >= 0){
        reverse[revIndex] = str[strIndex];

        strIndex--;
        revIndex++;
    }
    reverse[revIndex] = '\0';

    printf("orginal string = %s\n", str);
    printf("Reverse string = %s\n", reverse);
}
