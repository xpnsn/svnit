#include <stdio.h> 

int main() {
    printf("Enter the size of Matrix 1 (mxn) : ");
    int n1;
    int m1;
    scanf("%d", &n1);
    scanf("%d", &m1);

    printf("Enter the array 1 elements : \n");
    int a[n1][m1];

    for(int i=0; i<n1; i++) {
        for(int j=0; j<m1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the size of Matrix 1 (mxn) : ");
    int n2;
    int m2;
    scanf("%d", &n2);
    scanf("%d", &m2);

    
    printf("Enter the array 2 elements : \n");
    int b[n2][m2];

    for(int i=0; i<n2; i++) {
        for(int j=0; j<m2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int ans=0;
    int c[n1][m2];
    int x=0;

    for(int i=0; i<n1; i++) {
        for(int j=0; j<m2; j++) {
            for(int k=0; k<m1; k++) {
                ans += a[i][x]*b[x][j];
                x++;
            }
            c[i][j] = ans;
            x = 0;
            ans = 0;
        }
    }

    printf("Multiplication of Matrices are : \n");

    for(int i=0; i<n1; i++) {
        for(int j=0; j<m2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}