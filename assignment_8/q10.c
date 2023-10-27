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

    int odd=0,even=0;

    for(int i=0; i<n; i++) {
        if(a[i]%2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    int o[odd],e[even];
    int x=0,y=0;

    for(int i=0; i<n; i++) {
        if(a[i]%2 == 0) {
            e[x++] = a[i];
        } else {
            o[y++] = a[i];
        }
    }

    printf("Even array : ");
    
    for(int i=0; i<even; i++) {
        printf("%d ", e[i]);
    }

    printf("\nOdd array : ");
    
    for(int i=0; i<odd; i++) {
        printf("%d ", o[i]);
    }
}