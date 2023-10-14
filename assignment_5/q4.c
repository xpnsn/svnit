#include <stdio.h>

int main() {
    printf("Enter a character : ");
    char ch;
    scanf("%d", &ch);
    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90)) {
        printf("Character input is an alphabet");
    } else {
        printf("Charater input is not an alphabet");
    }
}