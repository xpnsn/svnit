#include<stdio.h>

int main()
{
    char a[20];
    int x=0,len=0;
    
    printf("Enter the string: ");
    fgets(a, sizeof(a), stdin);

    while(a[x++]!='\0'){
        len++;
    }


    for(int i=0,j=len-2; i<len/2; i++,j--){
        a[i] = a[i] + a[j];
        a[j] = a[i] - a[j];
        a[i] = a[i] - a[j];
    }

    printf("Reversed String : %s\n", a);
   
    return 0;
}
