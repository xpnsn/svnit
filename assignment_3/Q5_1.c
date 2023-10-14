#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("\nEnter the value of b : ");
    scanf("%d", &b);

    float sum;

    sum = a*a + 2*a*b + b*b;

    printf("%0.3f", sum);
}