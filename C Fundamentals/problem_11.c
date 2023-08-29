/*
C program to convert days to years, weeks, month and days
*/
#include <stdio.h>
int main(){
    int firstAngle, secondAngle, thirdAngle;

    printf("Enter two angle of the triangle: ");
    scanf("%d%d", &firstAngle, &secondAngle);

    thirdAngle = 180 - (firstAngle + secondAngle);
    printf("Third angle of the triangle: %d", thirdAngle);

    return 0;
}