#include <stdio.h>

int main() {
    printf("Enter the size of matrix : ");
    int n;
    scanf("%d", &n);

    int a[n];
    int sum = 0;

    printf("Enter the array elements\n");

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            sum += a[i]%a[j];
        }
    }

    printf("Ans : %d", sum);

}   