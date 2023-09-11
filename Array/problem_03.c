/**
 * C program to find sum of array elements
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
    int sum = 0;
    for ( int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    printf("Sum of all elements is: %d", sum);
    return 0;
}
