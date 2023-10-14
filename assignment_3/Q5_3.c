#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("\nEnter the value of b : ");
    scanf("%d", &b);
    printf("\nEnter the value of c : ");
    scanf("%d", &c);

    float sum;

    sum = a*a*a + c*c*c + b*b*b - 3*a*b*c;

    printf("%0.3f", sum);
}