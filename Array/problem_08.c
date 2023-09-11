/*
C program to copy one array elements to another
*/
#include <stdio.h>
void main(){
    int i, size;
    printf("Enter a size: ");
    scanf("%d", &size);
    int array1[size], array2[size];

    printf("Enter the array elements: ");
    for( i = 0; i < size; i++){
        scanf("%d", &array1[i]);
    }
    
    //Copying array1 elements to array2
    for( i = 0; i < size; i++){
        array2[i] = array1[i];
    }

    printf("\nFirst array elements are: ");
    for( i = 0; i < size; i++){
        printf("%d ", array1[i]);
    }
    printf("\nSecond array elements are: ");
    for( i = 0; i < size; i++){
        printf("%d ", array2[i]);
    }
}