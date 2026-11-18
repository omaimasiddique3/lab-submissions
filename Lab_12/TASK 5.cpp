#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void getCategoryCounts(const char *str, int counts[4]) {
    counts[0] = 0; // Uppercase letters
    counts[1] = 0; // Lowercase letters
    counts[2] = 0; // Digits
    counts[3] = 0; // Special characters
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            counts[0]++;
        } else if (islower(str[i])) {
            counts[1]++;
        } else if (isdigit(str[i])) {
            counts[2]++;
        } else {
            counts[3]++;
        }
    }
}


float calculateSimilarity(const char *pattern, const char *attempt) {
    int patternCounts[4];
    int attemptCounts[4];
    
    getCategoryCounts(pattern, patternCounts);
    getCategoryCounts(attempt, attemptCounts);
    
    float totalMatch = 0;
    float totalPattern = 0;
    
    for (int i = 0; i < 4; i++) {
        totalPattern += patternCounts[i];
        if (attemptCounts[i] <= patternCounts[i]) {
            totalMatch += attemptCounts[i];
        } else {
            totalMatch += patternCounts[i];
        }
    }
    
    if (totalPattern == 0) return 0.0f;
    return (totalMatch / totalPattern) * 100.0f;
}

int main() {
    int n, i;
    
    
    printf("Enter the number of participants: ");
    scanf("%d", &n);
    getchar(); 
    
    char **attempts = (char **)malloc(n * sizeof(char *));
    if (attempts == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    float *scores = (float *)malloc(n * sizeof(float));
    if (scores == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    
    char patternBuffer[256];
    printf("Enter the password pattern string: ");
    fgets(patternBuffer, sizeof(patternBuffer), stdin);
    patternBuffer[strcspn(patternBuffer, "\n")] = 0; 
    
    char *pattern = (char *)malloc((strlen(patternBuffer) + 1) * sizeof(char));
    if (pattern == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    strcpy(pattern, patternBuffer);
    
    int highestIndex = 0;
    float highestScore = -1.0f;
    
    
    for (i = 0; i < n; i++) {
        char buffer[256];
        printf("Enter password attempt for participant %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = 0;
        
        attempts[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        if (attempts[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        strcpy(attempts[i], buffer);
        
        
        scores[i] = calculateSimilarity(pattern, attempts[i]);
        
        if (scores[i] > highestScore) {
            highestScore = scores[i];
            highestIndex = i;
        }
    }
    
    
    printf("\n--- Password Attempt Similarity Report ---\n");
    for (i = 0; i < n; i++) {
        printf("Participant %d [%s] -> Similarity Score: %.2f%%\n", i + 1, attempts[i], scores[i]);
    }
    
    
    printf("\n--- Highest Similarity Result ---\n");
    printf("Participant %d has the highest similarity score of %.2f%% with password: %s\n", 
           highestIndex + 1, scores[highestIndex], attempts[highestIndex]);
    
    
    free(pattern);
    free(scores);
    for (i = 0; i < n; i++) {
        free(attempts[i]);
    }
    free(attempts);
    
    return 0;
}
