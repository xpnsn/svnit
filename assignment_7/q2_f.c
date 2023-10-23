#include <stdio.h>

int main() {
    
    for(int i=65; i<=81; i=i+4) {
        
        for(int k=77; k>=i; k=k-4) {
            printf("  ");
        }
        
        for(int j=65; j<=i; j=j+2) {
            printf("%c ",j);
        }
        
        printf("\n");
        
    }
    
    for(int i=77; i>=65; i=i-4) {
        
        for(int k=77; k>=i; k=k-4) {
            printf("  ");
        }
        
        for(int j=65; j<=i; j=j+2) {
            printf("%c ",j);
        }
        
        printf("\n");
        
    }
}