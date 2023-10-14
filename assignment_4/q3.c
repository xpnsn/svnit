#include <stdio.h>

int main() {

    printf("Enter the number of days : ");
    int days;

    scanf("%d", &days);
    printf("%d years %d weeks %d days", days/365, (days%365)/7, (days%365)%7);

    return 0;
}