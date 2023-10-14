#include <stdio.h>

int main() {
    printf("Enter the year :");
    int yr;
    scanf("%d", &yr);

    yr % 4 == 0 ? printf("The year is leap year") : 
    printf("The year is not a leap year");
}