#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, i;
    int totalChars = 0;
    int maxLength = 0;
    int longestIndex = 0;

    
    printf("Enter the number of feedback entries: ");
    scanf("%d", &n);
    getchar(); 

    
    char **feedbacks = (char **)malloc(n * sizeof(char *));
    if (feedbacks == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        char buffer[1000];
        printf("Enter feedback entry %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        
       
        buffer[strcspn(buffer, "\n")] = 0;

        int len = strlen(buffer);
        

        feedbacks[i] = (char *)malloc((len + 1) * sizeof(char));
        if (feedbacks[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        strcpy(feedbacks[i], buffer);

        
        totalChars += len;

        
        if (len > maxLength) {
            maxLength = len;
            longestIndex = i;
        }
    }

   
    printf("\n--- Feedback Analysis Summary ---[cite: 3]\n");
    printf("Total number of characters across all entries: %d\n\n", totalChars);
    
    printf("All Feedback Entries:\n");
    char **ptr = feedbacks;
    for (i = 0; i < n; i++) {
        printf("Entry %d: %s\n", i + 1, *(ptr + i));
    }

    printf("\nLongest Feedback Entry (Length %d):\n%s\n", maxLength, feedbacks[longestIndex]);

   
    for (i = 0; i < n; i++) {
        free(feedbacks[i]);
    }
    free(feedbacks);

    return 0;
}
