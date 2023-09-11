/**
 * C program to find second largest number in array
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
    int largest, secondLargest;
    if( arr[0] > arr[1]){
        largest = arr[0];
        secondLargest = arr[1];
    } else{
        largest = arr[1];
        secondLargest = arr[0];
    }

    for( int i = 2; i < size; i++){
        if( largest < arr[i]){
            secondLargest = largest;
            largest = arr[i];
        } else if( secondLargest < arr[i]){
            secondLargest = arr[i];
        }
    }
    printf("Largest- %d \nSecond Largest- %d\n", largest, secondLargest);
    return 0;
}
