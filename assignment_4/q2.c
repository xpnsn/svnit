#include <stdio.h>

int main() {

    printf("Enter the number 'a' : ");
    int a;
    scanf("%d", &a);

    printf("a++ : %d\n", a++);
    printf("++a : %d\n", ++a);
    printf("a-- : %d\n", a--);
    printf("--a : %d\n", --a);

    return 0;
}