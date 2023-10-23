#include <stdio.h>

int main() {
    
    printf("Enter 1st 4 digit number : ");
    int n1;
    scanf("%d", &n1);
    
    printf("Enter 2nd 4 digit number : ");
    int n2;
    scanf("%d", &n2);
    
    int rem1,rem2;
    int sum=0;
    
    while(n1 > 0 && n2 > 0) {
        rem1=n1%10;
        rem2=n2%10;
        sum += rem1*rem2;
        n1/=10;
        n2/=10;
    }
    
    printf("Ans : %d",sum);
}