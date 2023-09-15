/*
C program to convert lowercase string to uppercase
*/
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
void main(){
    char lowercaseString[MAX_SIZE];
    char uppercaseString[MAX_SIZE];


    printf("Enter the string: ");
    gets(lowercaseString);
    printf("\nInput uppercase string: ");
    gets(uppercaseString);
    int i = 0;
    while( lowercaseString[i] !='\0'){
        if( lowercaseString[i] >= 'a' && lowercaseString[i] <= 'z'){
            lowercaseString[i] = lowercaseString[i] - 32;
        }
        i++;
    }
    printf("Uppercase strings: %s\n", lowercaseString);

    for( int j = 0; uppercaseString[j] != '\0'; j++){
        if(uppercaseString[j] >= 'A' && uppercaseString[j] <= 'Z'){
            uppercaseString[j] = uppercaseString[j] + 32;
        }
    }
    printf("The lowercase string is: %s\n", uppercaseString);

    char anotherString[MAX_SIZE];
    printf("Enter another string: ");
    gets(anotherString);

    strupr(anotherString);
    printf("Another string in uppercase is: %s", anotherString);
}
