#include <stdio.h>

int main() {
    float sensor_data[3][4];
    int r, c;
    int target;

    /* Input readings: 3 days x 4 sensors */
    printf("Enter temperature readings (3 days x 4 sensors):\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 4; c++) {
            printf("  Day %d, Sensor %d: ", r + 1, c);
            scanf("%f", &sensor_data[r][c]);
        }
    }

    /* Column index of the faulty sensor */
    do {
        printf("\nEnter column index of the defective sensor (0-3): ");
        scanf("%d", &target);
        if (target < 0 || target > 3) {
            printf("Invalid index. Try again.\n");
        }
    } while (target < 0 || target > 3);

    /* Left-shift all columns beyond the target index */
    for (r = 0; r < 3; r++) {
        for (c = target; c < 3; c++) {
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }

    /* Display the updated 3x3 matrix */
    printf("\n====== UPDATED SENSOR MATRIX (3x3) ======\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("%8.2f", sensor_data[r][c]);
        }
        printf("\n");
    }

    return 0;
}
