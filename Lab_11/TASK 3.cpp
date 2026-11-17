#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float unitPrice;
};

int main() {
    struct Item items[5];
    float totalInventoryValue = 0;
    int searchId, found = 0;

    printf("Enter details for 5 items:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nItem %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &items[i].id);
        printf("Enter Name: ");
        scanf("%s", items[i].name);
        printf("Enter Quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Enter Unit Price: ");
        scanf("%f", &items[i].unitPrice);

        totalInventoryValue += (items[i].quantity * items[i].unitPrice);
    }

    printf("\nTotal Inventory Value of the warehouse: %.2f\n", totalInventoryValue);

    printf("\nEnter Item ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < 5; i++) {
        if (items[i].id == searchId) {
            printf("\nItem Found!\n");
            printf("ID: %d\nName: %s\nQuantity: %d\nUnit Price: %.2f\n", 
                   items[i].id, items[i].name, items[i].quantity, items[i].unitPrice);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Item with ID %d not found.\n", searchId);
    }

    return 0;
}
