#include <stdio.h>

int main() {

    printf("Enter the number : ");
    int x;
    scanf("%d", &x);

    printf("\nAfter shifting 2bits to the left, the modified number : %d", x<<2);
}