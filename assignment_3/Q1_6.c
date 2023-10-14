#include <stdio.h>

int main() {
    
    char str[100];

    printf("Enter your name \n");
    gets(str);
    printf("%s", str);

    return 0;
}