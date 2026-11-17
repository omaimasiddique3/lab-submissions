#include <stdio.h>

struct Product {
    int id;
    char name[50];
    char category[50];
    float price;
    int stockQuantity;
};

void displayProductDetails(struct Product p) {
    float finalPrice = p.price * 0.95;
    printf("Product ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original Price: %.2f\n", p.price);
    printf("Final Price (after 5%% discount): %.2f\n", finalPrice);
    printf("Available Stock Quantity: %d\n", p.stockQuantity);
}

int main() {
    struct Product product1 = {101, "Wireless Mouse", "Electronics", 2500.00, 45};
    displayProductDetails(product1);
    return 0;
}
