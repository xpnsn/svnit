#include <stdio.h>

int main() {
    printf("Enter the number : ");
    int x;
    scanf("%d", &x);
    if(x==0) {
        printf("Number entered is zero");
    }
    x > 0 ? printf("Number entered is positive") : 
    printf("Number entered is negative");
}