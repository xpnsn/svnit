#include <stdio.h> 

int main() {
    
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int a[n];
    int b[n];
    int c[n];

    int sum = 0;

    printf("Enter the array elements of array 1 : ");

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the array elements of array 2 : ");

    for(int i=0; i<n; i++) {
        scanf("%d", &b[i]);
    }

    printf("Array 3 : ");

    for(int i=0; i<n; i++) {
        c[i] = a[i] + b[i];
        sum += c[i];
        printf("%d   ", c[i]);
    }

    printf("\nAverage value of the array is %f", (float)sum);
}