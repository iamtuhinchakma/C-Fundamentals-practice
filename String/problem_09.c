/*
C program to check whether a string is palindrome or not
*/
#include <stdio.h>
#include <string.h>
void main(){
    char str[100];
    int length, startIndex, endIndex;

    printf("Enter any string: ");
    gets(str);

    length = 0;
    while( str[length] != '\0'){
        length++;
    }
    startIndex = 0;
    endIndex = length - 1;

    while( startIndex <= endIndex){
        if(str[startIndex] != str[endIndex]){
            break;
        }
        startIndex++;
        endIndex--;
    }
    if(startIndex >= endIndex){
        printf("String is Palindrome!");
    } else{
        printf("String is not Palindrome!");
    }
    /*
    char reverseString[100];
    strcpy(reverseString, str);
    strrev(reverseString);

    int flag = strcmp(str, reverseString);
    if( flag == 0){
        printf("String is palindrome!");
    } else{
        printf("String is not palindrome!");
    }
    */
}