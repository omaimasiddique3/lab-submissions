#include <stdio.h>

int main() {
    int i, status, present = 0, absent;
    for (i = 1; i <= 15; i++) {
        printf("Student %d (1 = present, 0 = absent): ", i);
        scanf("%d", &status);
        if (status == 1) present++;
    }
    absent = 15 - present;
    printf("Total present: %d\n", present);
    printf("Total absent : %d\n", absent);
    return 0;
}
