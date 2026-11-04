#include <stdio.h>

int main(void) {
    FILE *fptr;
    int roll;
    char name[50];
    float marks;

    fptr = fopen("marks.txt", "r");
    if (fptr == NULL) {
        printf("Error: File Not Found!\n");
        return 1;
    }

    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("---------------------------------------------\n");

    while (fscanf(fptr, "%d %49s %f", &roll, name, &marks) != EOF)
        printf("%-10d %-20s %-10.2f\n", roll, name, marks);

    fclose(fptr);
    return 0;
}
