#include <stdio.h>

int main() {

    float num1, num2;
    int result;
    printf("Enter the first float number : "); 
    scanf("%f", &num1);
    printf("Enter the second float number : ");
    scanf("%f", &num2);
    result = (int)(num1 / num2);
    printf("Result as an integer: %d\n", result);

    int num1b;
    float num2b;
    int resultb;
    printf("Enter a negative integer: ");
    scanf("%d", &num1b);
    printf("Enter a positive float number : ");
    scanf("%f", &num2b);
    resultb = (int)(num1b / num2b);
    printf("Result as an integer: %d\n", resultb);

    float numic; int num2c; float resultc;
    printf("Enter a positive float number: ");
    scanf("%f", &num1c);
    printf("Enter a negative integer: "); 
    scanf("%d", &num2c);
    resultc = numic / num2c;
    printf("Result as a float: %f\n", resultc);

}