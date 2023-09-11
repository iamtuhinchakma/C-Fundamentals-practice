/*
C program to right rotate an array
*/
#include <stdio.h>
void main(){
    int i, size;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int array[size];
    
    int rotation;
    printf("Enter the number of time to rotate: ");
    scanf("%d", &rotation);

    printf("Enter the original array elements: ");
    for ( i = 0; i < size; i++ ){
        scanf("%d", &array[i]);
    }

    printf("Print the original array: ");
    for ( i = 0; i < size; i++ ){
        printf("%d ", array[i]);
    }
    for ( i = 0; i < rotation; i++ ){
        int lastElement;
        lastElement= array[size - 1];
        for ( int j = size - 1; j > 0; j--){
        array[j] = array[j - 1];
        }

        array[0]  = lastElement;
    }

    printf("\nArray after rotation: ");
    for( i = 0; i < size; i++ ){
        printf("%d ", array[i]);
    }
}