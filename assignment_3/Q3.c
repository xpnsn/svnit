#include <stdio.h> 

int main() {

    int marks[5];
    int x=0;
    printf("Enter the marks obtained in Maths : ");
    scanf("%d", &marks[x++]);
    printf("\nEnter the marks obtained in Physics : ");
    scanf("%d", &marks[x++]);
    printf("\nEnter the marks obtained in Chemistry : ");
    scanf("%d", &marks[x++]);
    printf("\nEnter the marks obtained in English : ");
    scanf("%d", &marks[x++]);
    printf("\nEnter the marks obtained in Computer : ");
    scanf("%d", &marks[x++]);

    int total_marks = 0;

    for(int i=0; i<5; i++) {
        if(marks[i] < 35) {
            printf("Sorry you've failed in the exam");
            return 0;
        }
        total_marks += marks[i];
    }

    float percent = total_marks/5;

    printf("Total marks obtained : %d \n", total_marks);
    printf("Percentage obtained : %0.2f\n", percent);


    return 0;
}