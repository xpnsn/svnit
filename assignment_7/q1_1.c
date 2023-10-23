#include <stdio.h>
 
int main() {
    int sum = 0;
    printf("Enter the number of terms : ");
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += i%2==0 ? i*i : -i*i;
    }
    printf("Sum : %d", sum);
}