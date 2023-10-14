#include <stdio.h>

int main() {

    int a,b,c;
    printf("Enter 1st numbers : ");
    scanf("%d", &a);
    printf("Enter 2nd numbers : ");
    scanf("%d", &b);
    printf("Enter 3rd numbers : ");
    scanf("%d", &c);

    if(a>b && a>c) {
        printf("a is the greatest number\n");
    } else if(b>a && b>c) {
        printf("b is the greatest number\n");
    } else if(c>a && c>b) {
        printf("c is the greatest number\n");
    } 

    if(a<b && a<c) {
        printf("a is the smallest number\n");
    } else if(b<a && b<c) {
        printf("b is the smallest number\n");
    } else if(c<a && c<b) {
        printf("c is the smallest number\n");
    } 
}