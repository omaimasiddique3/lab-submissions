#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int totalRatings = 0;
    int highestIndex = 0;
    int updateIndex, newRating;

   
    printf("Enter the number of movie categories: ");
    scanf("%d", &n);

    int *ratings = (int *)malloc(n * sizeof(int));
    if (ratings == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

 
    printf("Enter the rating count for each category:\n");
    for (i = 0; i < n; i++) {
        printf("Category %d: ", i + 1);
        scanf("%d", &ratings[i]);
    }

    
    for (i = 0; i < n; i++) {
        totalRatings += ratings[i];
        if (ratings[i] > ratings[highestIndex]) {
            highestIndex = i;
        }
    }

    float averageRatings = (float)totalRatings / n;

    printf("\n--- Movie Rating Analysis Summary ---\n");
    printf("1. Total ratings across all categories: %d\n", totalRatings);
    printf("2. Average ratings per category: %.2f\n", averageRatings);
    printf("3. Category with the highest rating count: Category %d (Ratings: %d)\n", highestIndex + 1, ratings[highestIndex]);

    
    printf("\nEnter the category number you want to update (1 to %d): ", n);
    scanf("%d", &updateIndex);
    if (updateIndex >= 1 && updateIndex <= n) {
        printf("Enter the new rating count for Category %d: ", updateIndex);
        scanf("%d", &newRating);
        ratings[updateIndex - 1] = newRating;
        printf("Rating updated successfully!\n");
    } else {
        printf("Invalid category number!\n");
    }


    printf("\n--- Updated Rating List ---\n");
    for (i = 0; i < n; i++) {
        printf("Category %d: %d\n", i + 1, ratings[i]);
    }

    
    free(ratings);

    return 0;
}
