#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], c[200];
    int x=0, y=0;;
    
    printf("Enter the string 1 : ");
    fgets(a, sizeof(a), stdin);

    printf("Enter the string 2 : ");
    fgets(b, sizeof(b), stdin);

    while(a[x] != '\n') {
        c[y++] = a[x++];
    }

    x=0;
    c[y++] = ' ';

    while(b[x] != '\0') {
        c[y++] = b[x++];
    }

    printf("Merged String : %s", c);
   
    return 0;

}
