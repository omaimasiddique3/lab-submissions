#include<stdio.h>
int main()
{
	int category, subcategory;
	printf("Enter your category:\n1. Animal\n2. Vehicle\n3. Food\n4.Human\nChoice:");
	scanf("%d", &category);
	
	switch(category){
		case 1:
		printf("Select subcategory:\n1. Cat\n2. Dog\n3. Bird\nChoice");
		scanf("%d", &subcategory);
		switch(subcategory){
			case 1: printf("Selected: Animal-> Cat\n"); 
			break;
			case 2: printf("Selected: Animal-> Dog\n"); 
			break;
			case 3: printf("Selected: Animal-> Bird\n"); 
			break;
			default: printf("Invalid Subcategory.");
		} 
		break;
		case 2:
		printf("Select subcategory:\n1. Car\n2. Bus\n3. Bike\nChoice");
		scanf("%d", &subcategory);
		switch(subcategory){
			case 1: printf("Selected: Vehicle-> Car\n"); 
			break;
			case 2: printf("Selected: Vehicle-> Bus\n");
			break;
			case 3: printf("Selected: Vehicle-> Bike\n");
			break;
			default:
				printf("Invalid Subcategory.");
		}
		break;
		case 3:
				printf("Select subcategory:\n1. Pizza\n2. Burger\n3. Biryani\nChoice");
		scanf("%d", &subcategory);
		switch(subcategory){
			case 1: printf("Selected: Food-> Pizza\n");
			break;
			case 2: printf("Selected: Food-> Burger\n");
			break;
			case 3: printf("Selected: Food-> Biryani\n");
			break;
			default:
				printf("Invalid Subcategory.");
		}
		break;
			case 4:
					printf("Select subcategory:\n1. Male\n2. Female\n3. Child\nChoice");
		scanf("%d", &subcategory);
		switch(subcategory){
			case 1: printf("Selected: Human-> Male\n");
			break;
			case 2: printf("Selected: Human-> Female\n");
			break;
			case 3: printf("Selected: Human-> Child\n");
			break;
			default:
				printf("Invalid Subcategory.");
		}
		break;
		default:
			printf("Invalid Category Selection.");
	}
	return 0;
}

