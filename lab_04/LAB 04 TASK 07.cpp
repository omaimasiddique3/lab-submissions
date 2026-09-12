#include<stdio.h>
int main(){
	int data_used;
	float price_per_GB, basic_cost, discount_rate=0.00, discount_amount, final_cost;
	printf("Enter the data used:");
	scanf("%d", &data_used);
	printf("Enter the price per GB:");
	scanf("%f", &price_per_GB);
	basic_cost = data_used * price_per_GB;
	switch(data_used / 50){
		case 0:
			discount_rate = 0.00;
			break;
		case 1:
			discount_rate = 0.05;
			break;
		case 2:
		case 3: 
		discount_rate = 0.10;
		break;
		default:
			discount_rate = 0.15;
		
		
	}
	discount_amount=basic_cost * discount_rate;
	final_cost= basic_cost - discount_amount;
	
printf("Basic cost:$%.2f\n", basic_cost);
printf("Discount Amount:$%.2f\n", discount_amount);
printf("Final Cost:$%.2f\n", final_cost);
return 0;
	}
