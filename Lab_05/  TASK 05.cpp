#include <stdio.h>

int main() {
    float confidence;
    int user_type; // 1 for Authorized, 0 for Unauthorized

    printf("Enter face recognition confidence percentage: ");
    scanf("%f", &confidence);
    printf("Enter User Type (1 for Authorized, 0 for Unauthorized): ");
    scanf("%d", &user_type);

    // Confidence Level classification
    if (confidence >= 80) {
        printf("Recognition Status: Face Recognized\n");
    } else if (confidence >= 50) {
        printf("Recognition Status: Manual Verification Required\n");
    } else {
        printf("Recognition Status: Face Not Recognized\n");
    }

    // Access Decision using Ternary Operator and Logical Operators
    int access_granted = (confidence >= 80 && user_type == 1) ? 1 : 0;

    if (access_granted) {
        printf("Access Decision: Access Granted\n");
    } else if (confidence < 50 || user_type == 0) {
        printf("Access Decision: Access Denied\n");
    }

    return 0;
}
