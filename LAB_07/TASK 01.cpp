#include <stdio.h>

int main() {
    char student_names[3][50];
    int marks[3][3];
    int i, j;
    float avg;
    int sum;

    
    for (i = 0; i < 3; i++) {
        printf("Enter full name of student %d: ", i + 1);
        scanf(" %[^\n]", student_names[i]);   /* leading space skips leftover newline */

        for (j = 0; j < 3; j++) {
            printf("  Enter marks for subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    /* Display report */
    printf("\n========== STUDENT REPORT ==========\n");
    printf("%-30s %s\n", "Name", "Average");
    printf("------------------------------------\n");

    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
            sum += marks[i][j];
        }
        avg = sum / 3.0;
        printf("%-30s %.2f\n", student_names[i], avg);
    }

    return 0;
}
