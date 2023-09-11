/*
C program to merge two sorted array
*/

#include <stdio.h>
void merge( int arr1[], int arr2[], int size1, int size2, int arr3[] ){
    int i = 0, j = 0, k = 0;
    while( i < size1 && j < size2 ){
        if( arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        } else{
            arr3[k++] = arr2[j++];
        }
    }
    while( i < size1){
        arr3[k++] = arr1[i++];
    }
    while( j < size2){
        arr3[k++] = arr2[j++];
    }
}

void main(){
    int i, size1, size2;

    printf("Enter the array size: ");
    scanf("%d%d", &size1, &size2);

    int array1[size1], array2[size2];

    printf("Enter the first array elements: ");
    for ( i = 0; i < size1; i++ ){
        scanf("%d", &array1[i]);
    }
    printf("Enter the second array elements: ");
    for ( i = 0; i < size2; i++ ){
        scanf("%d", &array2[i]);
    }

    int finalArray[size1 + size2];
    merge(array1, array2, size1, size2, finalArray);

    printf("Array after the merging: ");
    for( i = 0; i < size1 + size2; i++ ){
        printf("%d ", finalArray[i]);
    }

}
