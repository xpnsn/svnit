#include <stdio.h>

int main() {
    
    printf("Enter the size of matrix : ");
    int n;
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements\n");

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    int x=n-1;
    int temp=0;

    for(int i=0; i<n; i++) {
        if(a[i] != a[x]) {
            temp=1;
        }
        x--;
    }
    temp == 1 ? printf("The array is not a palindrome\n") : printf("The array is a palindrome\n");
}