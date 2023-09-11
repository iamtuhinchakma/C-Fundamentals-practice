/**
 * C program to find maximum and minimum element in array
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
    int max, min;
    max = arr[0];
    min = arr[0];

    for( int i = 1; i < size; i++){
        if( arr[i] > max){
            max = arr[i];
        } else{
            min = arr[i];
        }
    }
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    return 0;
}
