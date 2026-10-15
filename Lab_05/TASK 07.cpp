#include <stdio.h>

int main() {
    float confidence, required_threshold;

    printf("Enter model confidence score (%%): ");
    scanf("%f", &confidence);
    printf("Enter required confidence threshold (%%): ");
    scanf("%f", &required_threshold);

    // Confidence level check
    if (confidence >= 90) {
        printf("Confidence Level: Very High\n");
    } else if (confidence >= 75) {
        printf("Confidence Level: High\n");
    } else if (confidence >= 50) {
        printf("Confidence Level: Moderate\n");
    } else {
        printf("Confidence Level: Low\n");
    }

    // Acceptance determination
    if (confidence >= required_threshold && confidence >= 50) {
        printf("Prediction Result: Accepted\n");
    } else {
        printf("Prediction Result: Rejected\n");
    }

    return 0;
}
