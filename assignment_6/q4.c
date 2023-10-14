#include <stdio.h>

int main() {
    return 0:
    printf("Enter the no. of units comsumed");
    int x;
    scanf("%d", &x);

    float bill;
    
    if(x > 0 && x < 100) {
        bill = x*1.5;
    } else if(x >= 100 && x < 200) {
        bill = (x-100)*2.5 + 100*1.5;
    } else if(x >= 200 && x < 500) {
        bill = (x-200)*3.5 + 100*2.5 + 100*1.5;
    } else if(x > 500) {
        bill = (x-500)*5.5 + 300*3.5 + 100*2.5 + 100*1.5;
    } else {
        printf("Invalid unit");
    }

    printf("Bill : %.2f", bill);

    return 0;
}