/*
C program to count the frequency of eawch element of array
*/
#include <stdio.h>
#define MAX_SIZE 100
void main(){
    int array[MAX_SIZE], frequency[MAX_SIZE];
    int i, j, count, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the array elements: ");
    for( i = 0; i < size; i++){
        scanf("%d", &array[i]);

        //Initial initialize frequencies to -1
        frequency[i] = -1;
    }

    for( i = 0; i < size; i++ ){
        count = 1;
        for( j = i + 1; j < size; j++ ){
            if( array[i]  == array[j]){
                count = count + 1;
                frequency[j] = 0;
            }
        }
        if( frequency[i] != 0 ){
            frequency[i] = count;
        }
    }
    
    printf("\nFrequency of all elements of array: ");
    for ( i = 0; i < size; i++ ){
        if( frequency[i] != 0 ){
            printf("%d ouccurs %d times\n", array[i], frequency[i]);
        }
    }
}