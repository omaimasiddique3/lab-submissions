#include<stdio.h>
int main()
{
	char product[50];
	int quantity;
	float price;
	printf("Enter product name:");
	scanf("%s", &product);
	printf("Enter quantity:");
	scanf("%d", &quantity);
	printf("Enter price:");
	scanf("%f", &price);
	printf("Product Name: %s\n", product);
	printf("Quantity: %d\n" , quantity);
	printf("Price: %.2f\n", price);
	
	return 0;
	
}
