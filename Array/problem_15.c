/*
C program to put even and odd elemetns of array in two seperate array
*/

#include <stdio.h>

void main(){
    int i, size;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int array[size];

    printf("Input the array elements: ");
    for ( i = 0; i < size; i++ ){
        scanf("%d", &array[i]);
    }

    int evenArray[size], oddArray[size];
    int evenCount, oddCount;
    evenCount = 0, oddCount = 0;
    for( i = 0; i < size; i++ ){
        if(array[i] & 1 ){
            oddArray[oddCount] = array[i];
            oddCount++;
        } else{
            evenArray[evenCount] = array[i];
            evenCount++;
        }
    }

    printf("Elements of even array: ");
    for ( int j = 0; j < evenCount; j++ ){
        printf("%d ", evenArray[j]);
    }
    printf("\nElements of even array: ");
    for ( int j = 0; j < oddCount; j++ ){
        printf("%d ", oddArray[j]);
    }
}
