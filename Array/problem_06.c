/**
 * C program to count even and odd elements in array
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
    int even = 0, odd = 0;

    for( int i = 0; i < size; i++){
        if( arr[i] % 2 == 0){
            even++;
        } else{
            odd++;
        }
    }
    printf("Total even elements: %d \nTotal odd elements: %d", even, odd);
    return 0;
}
