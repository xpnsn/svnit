#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int x=0;
    
    printf("Enter the string: ");
    fgets(a, sizeof(a), stdin);

    int len = strlen(a) - 2;

    for(int i=0; i<len/2; i++) {
        if(a[i] != a[len]) {
            x=1;
            break;
        }
        len--;
    }


    x == 1 ? printf("Not a palindrome\n") : printf("Is a palindrome\n");
   
    return 0;

}
