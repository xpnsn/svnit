#include <stdio.h>

int main() {

    printf("Enter the farenheit temperature : ");
    float f;
    scanf("%f", &f);

    float c =(f-32) * (0.5555);

    printf("\nTemperature in celsius is %0.2f", c);
    return 0;
}