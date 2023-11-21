#include <stdio.h>
#include <math.h>

int flip(int n, int k) {

    int num = n % (int)pow(10, k);
    int rev = 0,rem;
    while (num > 0) {
        rem = num%10;
        rev = rev*10 + rem;
        num /= 10;
    }
    int first = (n / (int)pow(10, k)) * (int)pow(10, k);
    n = first + rev;

    return n;
}

int main() {
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);

    printf("Enter the value of k : ");
    int k;
    scanf("%d", &k);

    printf("Ans : %d\n", flip(n, k));
}