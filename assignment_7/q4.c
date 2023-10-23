#include <stdio.h>

int main() {
    
    printf("Enter num1 : ");
    int n1;
    scanf("%d", &n1);
    
    printf("Enter num2 : ");
    int n2;
    scanf("%d", &n2);
    
    int hcf = 1;
    
    for(int i=1; i<n1; i++) {
        if(n1%i == 0 && n2%i == 0) {
            hcf = i;
        }
    }
    
    printf("\nThe HCF of the two number %d and %d is %d",n1,n2,hcf);
}