/*
C Program to demonstrate input/output of all basic data types
*/
#include <stdio.h>
int main(){
    // Most used
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("You entered character is: %c\n", ch);

    short val;
    printf("Enter a short value: ");
    scanf("%hi", &val);
    printf("You signed short value is: %hi\n", val);

    // Most used
    int val1;
    printf("Enter a integer value: ");
    scanf("%d", &val1);
    printf("You entered integer value is: %d\n", val1);

    long longVal;
    printf("Enter a signed long value: ");
    scanf("%ld", &longVal);
    printf("You entered signed long value is: %ld\n", longVal);

    // Most Used
    long long longVal2;
    printf("Enter a singed long long value: ");
    scanf("%lld", &longVal2);
    printf("You entered signed long value is: %lld\n", longVal2);

    // Most used
    float floatVal;
    printf("Enter a float value: ");
    scanf("%f", &floatVal);
    printf("You entered float value is: %f\n", floatVal);

    // Most used
    double doubleVAl;
    printf("Enter a double value: ");
    scanf("%lf", &doubleVAl);
    printf("You entered double value is: %lf\n", doubleVAl);

    // Most used
    long double longDoubleVal;
    printf("Enter a long double value: ");
    scanf("%Lf", & longDoubleVal);
    printf("You entered long double value is: %Lf\n", longDoubleVal);

    return 0;
}