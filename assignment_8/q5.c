#include <stdio.h>

int main() {
    
    printf("Enter the size of array : ");
    int n;
    scanf("%d", &n);

    int a[n];
    int b[n-1];
    int x=0;

    printf("Enter the array elements : \n");

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to be delete : ");
    int del;
    scanf("%d", &del);

    for(int i=0; i<n; i++) {
        if(a[i] != del) {
            b[x++] = a[i];
        } 
    }

    printf("\nOriginal array : ");

    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nModified array : ");

    for(int i=0; i<x; i++) {
        printf("%d ", b[i]);
    }

}
