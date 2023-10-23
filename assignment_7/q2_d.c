#include <stdio.h>

int main() {
    
    int x=1;
    
    for(int i=0; i<=5; i++) {
        
        for(int j=1; j<=i; j++) {
            printf("%d",j);
        }
        
        for(int k=4; k>=i; k--) {
            printf("  ");
        }
        
        for(int l=i; l>=1; l--) {
            printf("%d",l);
        }
        printf("\n");
    }
}