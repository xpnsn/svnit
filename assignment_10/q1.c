#include <stdio.h>

float power(float x, float y) {
    if(y == 0) {
        return 1;
    } else if(y > 0) {
        return  x * power(x, y-1);
    } else {
        return (1 / x) * power(x, y+1);
    }
}

int main() {
    printf("Enter the value of x : ");
    float x;
    scanf("%f", &x);

    printf("Enter the value of y : ");
    float y;
    scanf("%f", &y);

    printf("%f\n", power(x, y));
}