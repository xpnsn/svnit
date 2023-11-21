#include <stdio.h>

void matDiagonal() {
    printf("Enter the size of matrix : ");
    int n;
    scanf("%d", &n);

    printf("Enter the elements\n");
    int arr[n][n];

    int sum =0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
            if(i == j) {
                sum += arr[i][j];
            }
        }
    }

    printf("The sum of main diagonal is %d\n", sum);
}

int main() {
    matDiagonal();
}