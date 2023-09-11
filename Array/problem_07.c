/**
 * C program to count negative and positve elements in array
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
    int negative = 0, positive = 0;

    for( int i = 0; i < size; i++){
        if( arr[i] < 0){
            negative++;
        } else{
            positive++;
        }
    }
    printf("Total Negative elements: %d \nTotal Postive elements: %d", negative, positive);
    return 0;
}
