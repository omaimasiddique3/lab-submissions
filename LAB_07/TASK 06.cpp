#include <stdio.h>

int main() {
    int shifts[4][3];
    int i, j;
    int target;

    /* Input initial 3x3 data */
    printf("Enter initial production data (3 workstations x 3 shifts):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("  Workstation %d, Shift %d: ", i, j + 1);
            scanf("%d", &shifts[i][j]);
        }
    }

    /* Target row index (0 to 3 is valid, since the matrix grows to 4 rows) */
    do {
        printf("\nEnter row index for the emergency shift insertion (0-3): ");
        scanf("%d", &target);
        if (target < 0 || target > 3) {
            printf("Invalid index. Try again.\n");
        }
    } while (target < 0 || target > 3);

    /* Shift rows down, starting from the bottom so nothing is overwritten */
    for (i = 3; i > target; i--) {
        for (j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i - 1][j];
        }
    }

    /* Input new row values */
    printf("Enter the 3 production values for the new row:\n");
    for (j = 0; j < 3; j++) {
        printf("  Shift %d: ", j + 1);
        scanf("%d", &shifts[target][j]);
    }

    /* Display the resulting 4x3 matrix */
    printf("\n====== UPDATED PRODUCTION MATRIX (4x3) ======\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%6d", shifts[i][j]);
        }
        printf("\n");
    }

    return 0;
}
