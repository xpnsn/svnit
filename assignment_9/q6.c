#include <stdio.h>
#include <string.h>

int main() {
    
    printf("Enter the String : ");
    char s[100];
    fgets(s, sizeof(s), stdin);

    printf("Enter the character to be replaced : ");
    char target;
    scanf("%c", &target);

    printf("Enter the new character : ");
    char ch;
    scanf("\n%c", &ch);

    for(int i=0; i<strlen(s); i++) {
        if(s[i] == target) {
            s[i] = ch;
        }
    }

    printf("The new String is : %s\n", s);
}