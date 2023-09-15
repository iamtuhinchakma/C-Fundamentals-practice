/*
C program to concatenate two strings
*/
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
void main(){
    char str1[MAX_SIZE], str2[MAX_SIZE];

    int i, j;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    i = 0;
    while( str1[i] != '\0'){
        i++;
    }
    j = 0;
    while( str2[j] != '\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("\nConcatenated string = %s\n", str1);

    strcat(str2, str1);
    printf("Concatenated with build-in function: %s", str2);
}
