#include <stdio.h>
 
int main() {
    float sum = 0;
    printf("Enter the number of terms : ");
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("1/%d", i);
        if(i!=n) {
            printf(" + ");
        }
        sum = sum + (float)1/i;
    }
    printf("\nSum : %f", sum);
}