#include <stdio.h>

int main() {
    int marks1, marks2, marks3, total;
    float average;

    
    printf("Enter marks for subject 1: ");
    scanf("%d", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &marks3);

   
    total = marks1 + marks2 + marks3;
    average = total / 3.0;

    
    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);

    
    if (average >= 90)
        printf("Grade: A\n");
    else if (average >= 80)
        printf("Grade: B\n");
    else if (average >= 70)
        printf("Grade: C\n");
    else if (average >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}

