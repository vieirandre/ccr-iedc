/*
 * Considering a course that adopts the following pass criteria: students take two initial tests (P1 and P2); 
 * if the average on both tests is greater than or equal to 5.0, and if neither of the two grades is less than 3.0, 
 * the student passes directly. Otherwise, the student takes a third test (P3) and the average is calculated 
 * considering the third grade and the higher of the two grades between P1 and P2. In this case, the student will pass 
 * if the final average is greater than or equal to 5.0.
 * 
 * To write a program that initially reads a student's two grades. If the grades are not sufficient for the student to pass 
 * straight through, the program must capture the grade from the third exam. As an output, the program must print the student's 
 * final grade average, followed by the message "Approved" or "Not Approved" according to the criteria.
 */

#include <stdio.h>

int main(void) {
    float p1, p2, p3, avg;
    
    printf("P1 grade: ");
    scanf("%f", &p1); getchar();

    printf("P2 grade: ");
    scanf("%f", &p2); getchar();

    avg = (p1 + p2) / 2;

    if (avg >= 5.0 && p1 >= 3.0 && p2 >= 3.0) {
        printf("Average: %.1f\n", avg);
        printf("Approved\n");
    }
    else {
        printf("P3 grade: ");
        scanf("%f", &p3); getchar();

        avg = (p3 + (p1 > p2 ? p1 : p2)) / 2;

        printf("Average: %.1f\n", avg);

        if (avg >= 5.0) printf("Approved\n");
        else printf("Not Approved\n");
    }
    
    getchar();
    return 0;
}