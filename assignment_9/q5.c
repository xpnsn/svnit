#include <stdio.h>
#include <string.h>

int main() {
    
    printf("Enter the String : ");
    char s[100];
    fgets(s, sizeof(s), stdin);

    printf("Enter the character to find the frequency of it : ");
    char target;
    scanf("%c", &target);

    int cnt = 0;

    for(int i=0; i<strlen(s); i++) {
        if(s[i] == target) {
            cnt++;
        }
    }

    printf("The frequency of the character is %d\n", cnt);
}
