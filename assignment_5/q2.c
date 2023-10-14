#include <stdio.h>

int main() {
    printf("Enter the following number \n 1 : Addition \n 2 : Subtraction \n 3 : Multiplication \n 4 : Division \n");
    int x;
    scanf("%d", &x);
    float num1,num2;

    switch (x)
    {
    case 1:
        printf("Enter number 1 : ");
        scanf("%d", &num1);
        printf("Enter number 2 : ");
        scanf("%d", &num2);

        printf("Ans = %d", num1+num2);
        break;
    case 2:
        printf("Enter number 1 : ");
        scanf("%d", &num1);
        printf("Enter number 2 : ");
        scanf("%d", &num2);

        printf("Ans = %d", num1-num2);
        break;
    case 3:
        printf("Enter number 1 : ");
        scanf("%d", &num1);
        printf("Enter number 2 : ");
        scanf("%d", &num2);

        printf("Ans = %d", num1*num2);
        break;
    case 4:
        printf("Enter number 1 : ");
        scanf("%f", &num1);
        printf("Enter number 2 : ");
        scanf("%f", &num2);

        printf("Ans = %0.3f", num1/num2);
        break;
    
    default:
        printf("Invalid Input");
    }
}