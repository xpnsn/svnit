#include <stdio.h>

int main() {
    printf("Enter the size of matrix");
    int n;
    scanf("%d", &n);

    int a[n][n];

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
            if(i<j) {
                printf("0  ");
            } else {
                printf("%d  ", a[i][j]);
            }
        }
        printf("\n");
    }

}