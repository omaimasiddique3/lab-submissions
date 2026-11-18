#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *stock;
    int totalStock = 0;
    int lowestIndex = 0;
    int updateIndex, newStock;

    
    printf("Enter the number of book categories: ");
    scanf("%d", &n);

    stock = (int *)malloc(n * sizeof(int));
    if (stock == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }


    printf("Enter the stock quantity for each category:\n");
    for (i = 0; i < n; i++) {
        printf("Category %d: ", i);
        scanf("%d", &stock[i]);
    }

   
    for (i = 0; i < n; i++) {
        totalStock += stock[i];
        if (stock[i] < stock[lowestIndex]) {
            lowestIndex = i;
        }
    }

    float averageStock = (float)totalStock / n;

    printf("\n--- Stock Summary ---[cite: 3]\n");
    printf("Total stock: %d\n", totalStock);
    printf("Average stock per category: %.2f\n", averageStock);
    printf("Category index with the lowest stock: %d (Stock: %d)\n", lowestIndex, stock[lowestIndex]);

    printf("\nEnter the category index you want to update (0 to %d): ", n - 1);
    scanf("%d", &updateIndex);
    if (updateIndex >= 0 && updateIndex < n) {
        printf("Enter the new stock quantity for category %d: ", updateIndex);
        scanf("%d", &newStock);
        stock[updateIndex] = newStock;
        printf("Stock updated successfully!\n");
    } else {
        printf("Invalid category index!\n");
    }

    
    printf("\nUpdated Stock List:\n");
    for (i = 0; i < n; i++) {
        printf("Category %d: %d\n", i, stock[i]);
    }

    
    free(stock);

    return 0;
}
