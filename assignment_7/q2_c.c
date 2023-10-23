#include <stdio.h>

int main() {
    
    for(int i=0; i<5; i++) {
        int num = 1;
        for(int k=4; k>i; k--) {
            printf(" ");
        }
        
        for(int j=0; j<=i; j++) {
            printf("%d ", num);
            num=num*(i-j)/(j+1);
        }
        printf("\n");
    }
}