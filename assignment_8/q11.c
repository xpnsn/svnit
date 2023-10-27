#include <stdio.h>

int main() {
    
    printf("Enter the size of array : ");
    int n;
    scanf("%d", &n);

    int a[n];
    int sum1=0;

    printf("Enter the array elements : \n");

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        sum1 += a[i];
    }

    int max = a[0];

    for(int i=0; i<n-1; i++) {
        if(max < a[i+1]) {
            max = a[i+1];
        }
    }

    int sum2 = max*(max+1)/2;

    printf("The missing number in the array is %d\n", sum2-sum1);
}