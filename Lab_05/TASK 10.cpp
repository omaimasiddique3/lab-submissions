#include <stdio.h>
#include <math.h>

#define VIEW    1
#define TRAIN   2
#define TEST    4
#define DEPLOY  8

int main() {
    float accuracy, confidence;
    int dataset_size, user_role, model_status, permissions;

    // Inputs
    printf("Enter Model Accuracy (%%): ");
    scanf("%f", &accuracy);
    printf("Enter Model Confidence (%%): ");
    scanf("%f", &confidence);
    printf("Enter Dataset Size: ");
    scanf("%d", &dataset_size);
    
    printf("Enter User Role (1 = Admin, 2 = Developer, 3 = Researcher): ");
    scanf("%d", &user_role);
    
    printf("Enter Model Status (1 = Ready, 2 = Testing, 3 = Training): ");
    scanf("%d", &model_status);
    
    printf("Enter User Permission Bitmask (View=1, Train=2, Test=4, Deploy=8): ");
    scanf("%d", &permissions);

    // 1. Calculate Model Score: (Accuracy + Confidence) / 2
    float model_score = (accuracy + confidence) / 2.0;

    // 2. Check deployment permission using bitwise operator
    int has_deploy_permission = (permissions & DEPLOY) ? 1 : 0;

    // 3. Check readiness for deployment using operators and precedence
    int deployment_ready = (accuracy >= 80.0) && 
                           (confidence >= 75.0) && 
                           (dataset_size >= 1000) && 
                           (model_status == 1) && 
                           (has_deploy_permission == 1);

    // Display summary evaluation
    printf("\n--- AI Engine Evaluation Result ---\n");
    printf("Engine Variable Memory Size: %lu bytes\n", sizeof(model_score));
    printf("Model Score: %.2f\n", model_score);

    printf("User Role: ");
    switch (user_role) {
        case 1: printf("Admin\n"); break;
        case 2: printf("Developer\n"); break;
        case 3: printf("Researcher\n"); break;
        default: printf("Unknown\n");
    }

    printf("Model Status: ");
    switch (model_status) {
        case 1: printf("Ready\n"); break;
        case 2: printf("Testing\n"); break;
        case 3: printf("Training\n"); break;
        default: printf("Unknown\n");
    }

    // Ternary operator output for final deployment determination
    printf("Deployment Eligibility: %s\n", deployment_ready ? "DEPLOYMENT READY" : "NOT READY FOR DEPLOYMENT");

    return 0;
}
