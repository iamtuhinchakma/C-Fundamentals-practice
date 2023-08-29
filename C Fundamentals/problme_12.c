/*
C program to calculate simple interest
*/
#include <stdio.h>
int main(){
    double principle, time, rate, simpleInterest;

    printf("Enter the principle(amount): ");
    scanf("%lf", &principle);

    printf("Enter time: ");
    scanf("%lf", &time);

    printf("Enter rate: ");
    scanf("%lf", &rate);

    simpleInterest = ( principle * rate * time) / 100;

    printf("Simple interest = %lf", simpleInterest);
    return 0;
}