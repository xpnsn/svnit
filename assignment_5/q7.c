#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the one side of triangle : ");
    scanf("%d", &a);
    printf("Enter the other side of triangle : ");
    scanf("%d", &b);
    printf("Enter the another side of triangle : ");
    scanf("%d", &c);

    if(a == b && a == c) {
        printf("Triangle is an equilateral triangle");
    }else if(a == b || b == c || c == a) {
        printf("Triangle is an isosceles triangle");
    } else {
        printf("Triangle is an scalene triangle");
    }

}