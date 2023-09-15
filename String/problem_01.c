/*
C program to find legnth of a string
*/
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
void main(){
    char text[MAX_SIZE];

    int i, count = 0;
    printf("Enter any string: ");
    gets(text);

    for ( i = 0; text[i]!= '\0'; i++ ){
        count++;
    }
    printf("Length of '%s' = %d\n", text, count);

    char text1[MAX_SIZE];

    printf("Enter any string: ");
    scanf("%[^\n]s", text1);

    while( text1[i] != '\0' ){
        i++;
    }

    printf("Length of '%s' = %d\n", text1, i );

    int length = strlen(text);
    int legnth1 = strlen(text1);
    printf("Actual length of first string is %d\n Actual length of second string is %d", length, legnth1);
}
