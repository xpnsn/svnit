#include <stdio.h>
#include <string.h>

void addCharacter(char s[], char ch, int idx) {
    char s1[100]; 
    int x=0;
    for(int i=0; i<strlen(s); i++) {
        if(i == idx) {
            s1[x++] = ch;
        }
        s1[x++] = s[i];
    }

    printf("Original String : %s", s);
    printf("Modified String : %s", s1);
}

int main() {
    printf("Enter the String : ");
    char s[100];
    fgets(s, sizeof(s), stdin);

    printf("Enter the character to be inserted : ");
    char ch;
    scanf("%c", &ch);

    printf("Enter the index : ");
    int idx;
    scanf("%d", &idx);

    addCharacter(s, ch, idx);
}
