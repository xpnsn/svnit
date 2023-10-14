#include <stdio.h>

int maim() {

    printf("Enter the policy amount");

    int amt;

    scanf("%d", &amt);
    int com;

    if(amt > 0 && amt <= 10000) {
        com = 0.5*amt;
    } else if(amt < 25000) {
        com = 50 + 0.6*(amt-10000);
    } else if(amt > 25000) {
        com = 140 + 0.75*(amt-25000);
    } else {
        printf("Invalid Input");
    }

    printf("Your commission : %d", com);

    return 0;
}