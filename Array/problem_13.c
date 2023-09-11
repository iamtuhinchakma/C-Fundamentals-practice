/*
C program to left rotate an array
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
        int firstElement;
        firstElement = array[0];
        for( int j = 0; j < size - 1; j++ ){
            array[j] = array[j + 1];
        }
        array[size - 1] = firstElement;
    }

    printf("\nArray after left rotation: ");
    for( i = 0; i < size; i++ ){
        printf("%d ", array[i]);
    }
}
