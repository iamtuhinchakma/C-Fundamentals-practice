/**
 * C program to print all negative elements from the array
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
    printf("\nThe negative elements are: ");
    for ( int i = 0; i < size; i++){
        if( arr[i] < 0){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
