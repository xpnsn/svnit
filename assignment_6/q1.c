#include <stdio.h>

int main() {
    printf("F(x) = Ax^3 - Bx^2 + Cx - D\n");
    printf("Enter the value of A, B, C, D, k, and x\n");
    int a,b,c,d,k,x;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &k, &x);
    int f;

    if(x > k) {
        f = a*x*x*x - b*x*x + c*x - d;
    } else if (x = k) {
        f = 0;
    } else {
        f = -a*x*x*x + b*x*x - c*x + d;
    }
    printf("F(x) = %d", f);
    return 0; 
}