#include <stdio.h>

int main() {

    int dist, fuel;
    printf("Enter the distance travelled by the car : ");
    scanf("%d", &dist);
    printf("Enter the fuel comsumed by the car : ");
    scanf("%d", &fuel);

    float mil = dist/fuel;

    printf("The mileage of the car is : %0.2f km/l", mil);
    return 0;
}