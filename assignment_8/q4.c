#include <stdio.h>

int main() {

    printf("Enter the size of array : ");
    int n;
    scanf("%d", &n);

    printf("Enter the array elements : \n");
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nOriginal Array : ");

    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }

    int mn=0, mx=0;

    for(int i=0; i<n; i++) {
        if(a[mn] > a[i]) {
            mn = i;
        }
        if(a[mx] < a[i]) {
            mx = i;
        }
    }

    int temp = a[mn];
    a[mn] = a[mx];
    a[mx] = temp;

    printf("\nModified Array : ");

    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }

}