/*
C program to delete element from array
*/
#include <stdio.h>
#define MAX_SIZE 10
void main(){
    int array[MAX_SIZE];
    int i, size, number, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the array elements: ");
    for( i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    printf("Enter the element to insert in the array: ");
    scanf("%d", &number);
    printf("Enter the element position: ");
    scanf("%d", &position);

    printf("The array elements: ");
    for( i = 0; i < size; i++ ){
        printf("%d ", array[i]);
    }
    if( position > size + 1 || position <= 0){
        printf("Invalid position! Please enter the position in between 1 to %d", size);
    } else{
        for( i = position - 1; i < size - 1; i++ ){
            array[i] = array[i + 1];
        }
        size--;

        printf("\nArray elements after inserting: ");
        for( i = 0; i < size; i++ ){
            printf("%d ", array[i]);
        }
    }
}