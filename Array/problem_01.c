/**
 * C program to input and print the array elements
 */

#include <stdio.h>
int main(){
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);
    int arr[size];

    for ( int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nElements in array are: ");
    for ( int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}