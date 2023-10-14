#include <stdio.h>

int main() {
    printf("Enter the marks : ");
    int m;
    scanf("%d", &m);

    if(m>=100 && m>=90) {
        printf("A+ Grade");
    } else if(m>80) {
        printf("A Grade");
    } else if(m>70) {
        printf("B+ Grade");
    } else if(m>60) {
        printf("B Grade");
    } else if(m>50) {
        printf("C Grade");
    } else if(m<50 && m>=0) {
        printf("F Grade")
    } else {
        printf("Invalid Marks");
    }
    return 0;
}