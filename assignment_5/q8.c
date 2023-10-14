#include <stdio.h>

int main() {
    printf("Imagine your Quadratic equation look like this : Ax^2 + Bx + C");
    int a,b,c;
    printf("Enter valur of A : ");
    scanf("%d", &a);
    printf("Enter valur of B : ");
    scanf("%d", &b);
    printf("Enter valur of C : ");
    scanf("%d", &c);

    float d = (b*b)-(4*a*c);

    if(d > 0) {
        printf("Roots are real and distinct");
    } else if (d == 0) {
        printf("Roots are real and equal");
    } else {
        printf("Roots are imaginary");
    }
}