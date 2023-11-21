#include<stdio.h>
#include <string.h>

    int main()
{
    char a[20],b[20],c[40];
    int i,j;
    
    printf("Enter the string 1: \n");
    fgets(a, sizeof(a), stdin);
    
    printf("Enter the string 2: \n");
    fgets(b, sizeof(b), stdin);
    
    i=0;
    while(i < strlen(a)-1){
        c[i]=a[i];
        i++;
    }
    c[i++] = ' ';
    j=0;
    while(j < strlen(b)-1){
        c[i]=b[j];
        i++;
        j++;
    }
    c[i]='\0';
    
   printf("String 3 : %s\n",c);
   

    return 0;
}
