#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter the binary number : ");
    long long bi;
    scanf("%lld", &bi);
    
    int deci=0;
    int i=0;
    int rem;
    
    while(bi != 0) {
        rem = bi%10;
        deci += rem*pow(2,i);
        bi/=10;
        i++;
    }
    
    printf("Decimal equivalent is %d",deci);
}