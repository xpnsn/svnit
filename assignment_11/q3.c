# include <stdio.h>
int main ()
{
    int n,k;
    int *p,*q;

    printf("Enter the number 1 : ");
    scanf("%d",&n);

    printf("Enter the number 2 : ");
    scanf("%d",&k);

    p=&n;
    q=&k;

    printf("Numbers before swapping : %d %d\n",*p,*q);
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    printf("Numbers after swapping : %d %d\n",*p,*q);

    return 0;
}