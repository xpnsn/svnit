#include <stdio.h>

int main() {
    
    int x=1;
    
    for(int i=0; i<=5; i++) {
        
        for(int j=1; j<=i; j++) {
            x++%2==0 ? printf("0") : printf("1");
        }
        printf("\n");
    }
}