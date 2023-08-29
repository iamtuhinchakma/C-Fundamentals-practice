/*
C program to convert temperature from celsius to Fahrenheit
*/
#include <stdio.h>
int main(){
    float celcius, fahrenheit;

    printf("Enter temperature in celcius: ");
    scanf("%f", &celcius);

    fahrenheit = ((celcius * 9/5 )+ 32);
    printf("The %.f degree celcius in Fahrenheit is %.2f", celcius, fahrenheit);
    return 0;
}