#include <stdio.h>

int main() {

    float a,b,c,d;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter b : ");
    scanf("%f", &b);
    printf("Enter c : ");
    scanf("%f", &c);
    printf("Enter d : ");
    scanf("%f", &d);

    printf("Ans : %0.2f", (a+b)*c/d);
}