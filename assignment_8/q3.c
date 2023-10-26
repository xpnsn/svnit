#include <stdio.h>

int main() {
    printf("Enter the size of matrix");
    int n;
    scanf("%d", &n);

    int a[n][n];
    int sum = 0;

    printf("Enter the array elements\n");

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Original Matrix : \n");
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("Modified Matrix : \n");

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i+j == n-1) {
                printf("%d  ", a[i][j]);
                sum += a[i][j];
            } else {
                printf("0  ");
            }
        }
        printf("\n");
    }

    printf("Sum of right diagonal elements are %d", sum);

}   
