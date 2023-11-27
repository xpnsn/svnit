#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = abs(*a - *b);

    *a = sum;
    *b = diff;
}

int main() {
    int a, b;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    update(&a, &b);

    printf("a : %d\nb : %d\n", a, b);

    return 0;
}