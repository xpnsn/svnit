#include <stdio.h>

int main() {
    
    float PI = 3.14, radius;
    printf("Enter the radius \n");
    scanf("%f", &radius);

    float diameter, area, circum;

    diameter = 2 * radius;
    area = PI * radius * radius;
    circum = 2 * PI * radius;

    printf("Diameter : %0.3f \nArea : %0.3f \nCircumference : %0.3f \n", diameter,area,circum);

    return 0;
}