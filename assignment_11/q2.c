# include <stdio.h>
int main ()
{
    int n;
    int *p;

    printf("Enter the number : ");
    scanf("%d",&n);
    p=&n;

    printf("%d\n",*p);

   return 0;
}