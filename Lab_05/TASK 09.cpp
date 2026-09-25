#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double val1, val2, result;

    printf("Select Operation:\n");
    printf("1. Square Root\n2. Power\n3. Absolute Value\n4. Floor\n5. Ceiling\nChoice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter input (>= 0): ");
            scanf("%lf", &val1);
            if (val1 < 0) {
                printf("Error: Invalid negative input for square root.\n");
            } else {
                result = sqrt(val1);
                printf("Square Root: %.2f\n", result);
            }
            break;

        case 2:
            printf("Enter base: ");
            scanf("%lf", &val1);
            printf("Enter exponent: ");
            scanf("%lf", &val2);
            result = pow(val1, val2);
            printf("Power Result: %.2f\n", result);
            break;

        case 3:
            printf("Enter number: ");
            scanf("%lf", &val1);
            result = fabs(val1);
            printf("Absolute Value: %.2f\n", result);
            break;

        case 4:
            printf("Enter number: ");
            scanf("%lf", &val1);
            result = floor(val1);
            printf("Floor Value: %.2f\n", result);
            break;

        case 5:
            printf("Enter number: ");
            scanf("%lf", &val1);
            result = ceil(val1);
            printf("Ceiling Value: %.2f\n", result);
            break;

        default:
            printf("Error: Invalid menu choice.\n");
    }

    return 0;
}
