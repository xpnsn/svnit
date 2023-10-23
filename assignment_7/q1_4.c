#include <stdio.h>
 
int main() {
    int sum = 0;
    printf("Enter the number : ");
    int n;
    scanf("%d", &n);
    int n1=n;
    int rem;
    while(n1>0) {
        rem = n1%10;
        sum = sum + rem*rem*rem;
        n1=n1/10;
    }
    sum == n ? printf("Is an armstrong number") : printf("Is not an armstrong number");
}