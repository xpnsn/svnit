#include <stdio.h>

int main() {
    printf("Enter the number : ");
    int x;
    scanf("%d", &x);

    for(int i=1; i<=x ; i++) {
        printf("%d", x*x*x);
    }

}