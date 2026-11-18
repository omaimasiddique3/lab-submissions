#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int containsDigit(char *str) {
    while (*str != '\0') {
        if (isdigit(*str)) {
            return 1;
        }
        str++;
    }
    return 0;
}

int main() {
    int n, i;

    
    printf("Enter the number of usernames (N): ");
    scanf("%d", &n);
    getchar(); 

    char **usernames = (char **)malloc(n * sizeof(char *));
    if (usernames == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        char buffer[100];
        printf("Enter username %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = 0; 

        usernames[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        if (usernames[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        strcpy(usernames[i], buffer);
    }

    
    printf("\n--- Valid Usernames (Alphabetic Characters Only) ---\n");
    for (i = 0; i < n; i++) {
        if (!containsDigit(usernames[i])) {
            printf("%s\n", usernames[i]);
        }
    }

    
    for (i = 0; i < n; i++) {
        free(usernames[i]);
    }
    free(usernames);

    return 0;
}
