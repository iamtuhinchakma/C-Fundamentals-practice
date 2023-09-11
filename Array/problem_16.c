/*
C program to sort array in ascending and descending order
*/
#include <stdio.h>
void main(){

    int i, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    for ( i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
    int temp = 0;
    for ( i = 0; i < size; i++ ){
        for ( int j = i + 1; j < size; j++ ){
            if( array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("Elements of array in ascending order: ");
    for ( i = 0; i < size; i++ ){
        printf("%d ", array[i]);
    }
}