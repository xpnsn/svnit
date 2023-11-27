# include <stdio.h>
int main ()
{
    int orignalvalue,a,*p;

    printf("Enter the number : ");
    scanf("%d", &orignalvalue);

    p=&orignalvalue;

    printf("Enter the new number : ");
    scanf("%d", &a);

    printf("Original Value : %d\n",*p);
    *p=a;
    printf("Modified Value : %d\n",orignalvalue);
    return 0;
}