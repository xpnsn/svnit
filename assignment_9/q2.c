#include<stdio.h>

int main()
{
    char a[100];
    int x=0;
    
    printf("Enter the string: ");
    fgets(a, sizeof(a), stdin);

    while(a[x]!='\0'){
        if((int)a[x] >= 97 && (int)a[x] <= 122) {
            a[x] = (char)((int)a[x]-32);
        } else if((int)a[x] >= 65 && (int)a[x] <= 90) {
            a[x] = (char)((int)a[x]+32);
        }
        x++;
    }

    printf("Modified String : %s\n", a);
   
    return 0;

}
