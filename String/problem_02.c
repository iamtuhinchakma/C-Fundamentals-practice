/*
C program to copy one string to another string
*/
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
void main(){
    char text[MAX_SIZE], text1[MAX_SIZE];

    int i = 0;
    printf("Enter any string: ");
    scanf("%[^\n]s ", text);

    //copy text to text1
    while( text[i] != '\0' ){
        text1[i] = text[i];
        i++;
    }
    text1[i] = '\0';

    printf("First string = %s\n", text);
    printf("Second string = %s\n", text1);

   /*
    char str1[MAX_SIZE], str2[MAX_SIZE];
    printf("Enter string 1: ");
    scanf("%[^\n]s", str1);

    strcpy(str2, str1);
    printf("\nstring1 = %s\n and string2 = %s", str1, str2);
    */

}
