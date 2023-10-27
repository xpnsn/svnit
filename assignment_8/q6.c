#include <stdio.h>

int main() {
    
    printf("Enter the size of array : ");
    int n;
    scanf("%d", &n);

    int a[n];
    int b[n+1];
    int x=0;

    printf("Enter the array elements : \n");

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to be inserted : ");
    int tar;
    scanf("%d", &tar);

    printf("Enter the index in which number is to be inserted : ");
    int in;
    scanf("%d", &in);
    
    for(int i=0; i<n+1; i++) {
        if(i != in) {
            b[i] = a[x++];
        } else {
            b[i] = tar;
        }
    }

    printf("\nOriginal array : ");

    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nModified array : ");

    for(int i=0; i<n+1; i++) {
        printf("%d ", b[i]);
    }

}