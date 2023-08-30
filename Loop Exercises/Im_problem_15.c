/*
C program to count frequency of digits in a number
*/
#include <stdio.h>
int main(){
   long long num, orginalNumber;

   int frequency[10];
   for( int i = 0; i < 10; i++ ){
    frequency[i] = 0;
   }

   printf("Enter any number: ");
   scanf("%lld", &num);

   orginalNumber = num;
   int lastDigit;
   while( num != 0 ){
    lastDigit = num % 10;
    num = num / 10;

    //Increment frequency array
    frequency[lastDigit]++;
   }
   printf("Frequency of each digit in %lld is: \n", num);
   for ( int i = 0; i < 10; i++ ){
    printf("Frequency of %d = %d\n", i, frequency[i]);
   }

    return 0;
}
