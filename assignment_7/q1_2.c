#include <stdio.h>
 
int main() {
    int sum = 0;
    printf("Enter the number of terms : ");
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum = sum+i*i;
    }
    printf("\nSum : %d", sum);
}