#include <stdio.h>

/* Returns discount amount in PKR */
float calculateDiscount(float amount, char type) {
    float rate;
    switch (type) {
        case 'P':
		rate = 20.0f;
		break;
        case 'G':  
		rate = 10.0f; 
		break;
        case 'S': 
		rate = 5.0f;  
		break;
        default:            
		rate = 0.0f; 
		
    }
    if (amount > 10000)
        rate += 2.0f;              
    return amount * rate / 100.0f;
}


float calculateFinalBill(float discounted) {
    float total = discounted + discounted * 0.15f;
    if (discounted <= 5000)
        total += 300;               
    return total;
}

int main(void) {
    float amount, discount, discounted, finalBill;
    char type;

    printf("Enter membership type (P/G/S): ");
    scanf(" %c", &type);
    printf("Enter shopping cart value (PKR): ");
    scanf("%f", &amount);

    discount   = calculateDiscount(amount, type);
    discounted = amount - discount;
    finalBill  = calculateFinalBill(discounted);

    printf("\nOriginal Amount   : PKR %.2f\n", amount);
    printf("Discount          : PKR %.2f\n", discount);
    printf("Discounted Amount : PKR %.2f\n", discounted);
    printf("Final Payable     : PKR %.2f\n", finalBill);
    return 0;
}
