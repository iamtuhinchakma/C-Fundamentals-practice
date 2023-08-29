/*
C program to convert days to years, weeks, month and days
*/
#include <stdio.h>
int main(){
    int days, years, weeks;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (365 / 7) % 365;

    printf("Yeasrs: %d\n", years);
    printf("Weeks: %d\n", weeks);
    return 0;
}