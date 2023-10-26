#include <stdio.h>

int main() {
    
    printf("Enter num1 : ");
    int n1;
    scanf("%d", &n1);
    
    printf("Enter num2 : ");
    int n2;
    scanf("%d", &n2);
    
    int count = 0;
    
    for(int i=n2+1; i<n1; i++) {
        i%2==0 ? printf("%d ", i) : printf("");
        count++;
    }
    
    printf("\nThe number of even number between %d and %d is %d",n1,n2,count/2);
}