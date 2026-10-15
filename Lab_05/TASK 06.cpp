#include <stdio.h>

int main() {
    int problem_type, algorithm;

    printf("Select Problem Type:\n");
    printf("1. Classification\n2. Regression\n3. Clustering\n4. Computer Vision\nChoice: ");
    scanf("%d", &problem_type);

    switch (problem_type) {
        case 1:
            printf("\nSelect Algorithm:\n1. Logistic Regression\n2. Decision Tree\n3. KNN\nChoice: ");
            scanf("%d", &algorithm);
            switch (algorithm) {
                case 1: printf("Selected Model: Logistic Regression\n"); break;
                case 2: printf("Selected Model: Decision Tree\n"); break;
                case 3: printf("Selected Model: KNN\n"); break;
                default: printf("Invalid algorithm selection.\n");
            }
            break;
        case 2:
            printf("\nSelect Algorithm:\n1. Linear Regression\n2. Polynomial Regression\n3. SVR\nChoice: ");
            scanf("%d", &algorithm);
            switch (algorithm) {
                case 1: printf("Selected Model: Linear Regression\n"); break;
                case 2: printf("Selected Model: Polynomial Regression\n"); break;
                case 3: printf("Selected Model: SVR\n"); break;
                default: printf("Invalid algorithm selection.\n");
            }
            break;
        case 3:
            printf("\nSelect Algorithm:\n1. K-Means\n2. Hierarchical Clustering\n3. DBSCAN\nChoice: ");
            scanf("%d", &algorithm);
            switch (algorithm) {
                case 1: printf("Selected Model: K-Means\n"); break;
                case 2: printf("Selected Model: Hierarchical Clustering\n"); break;
                case 3: printf("Selected Model: DBSCAN\n"); break;
                default: printf("Invalid algorithm selection.\n");
            }
            break;
        case 4:
            printf("\nSelect Algorithm:\n1. CNN\n2. YOLO\n3. R-CNN\nChoice: ");
            scanf("%d", &algorithm);
            switch (algorithm) {
                case 1: printf("Selected Model: CNN\n"); break;
                case 2: printf("Selected Model: YOLO\n"); break;
                case 3: printf("Selected Model: R-CNN\n"); break;
                default: printf("Invalid algorithm selection.\n");
            }
            break;
        default:
            printf("Invalid problem type choice.\n");
    }

    return 0;
}
