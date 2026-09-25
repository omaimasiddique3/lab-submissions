#include <stdio.h>

#define VIEW    1  // 0001
#define TRAIN   2  // 0010
#define TEST    4  // 0100
#define DEPLOY  8  // 1000

int main() {
    int permissions;

    printf("Enter user permissions value (integer sum of View=1, Train=2, Test=4, Deploy=8): ");
    scanf("%d", &permissions);

    printf("\nAllowed Operations:\n");
    if (permissions & VIEW)   printf("- View Permission Granted\n");
    if (permissions & TRAIN)  printf("- Train Permission Granted\n");
    if (permissions & TEST)   printf("- Test Permission Granted\n");
    if (permissions & DEPLOY) printf("- Deploy Permission Granted\n");

    // Check if user has BOTH training AND deployment permissions
    if ((permissions & TRAIN) && (permissions & DEPLOY)) {
        printf("\nUser HAS both Training and Deployment permissions.\n");
    } else {
        printf("\nUser DOES NOT have both Training and Deployment permissions.\n");
    }

    return 0;
}
