#include <stdio.h>

int main() {

    int a,b;
    printf("Enter the value of 'a' : ");
    scanf("%d", &a);
    printf("Enter the value of 'b' : ");
    scanf("%d", &b);

    // with temp variable

    int temp = a;
    a=b;
    b=temp;

    // without temp variable

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Value of a : %d\n",a);
    printf("Value of b : %d\n",b);

    return 0;
}