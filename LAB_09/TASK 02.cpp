#include <stdio.h>

void withdraw(float *balance, float amount) {
    if (amount <= *balance) {
        *balance -= amount;
        printf("Withdrawal successful. Amount withdrawn: %.2f\n", amount);
    } else {
        printf("Transaction Declined: Insufficient Balance\n");
    }
}

void deposit(float *balance, float amount) {
    *balance += amount;
    printf("Deposit successful. Updated balance: %.2f\n", *balance);
}

int main(void) {
    float balance = 10000.0f, amount;
    int choice;

    printf("Current balance: %.2f\n", balance);
    printf("Select transaction type (1 = Debit, 2 = Credit): ");
    scanf("%d", &choice);
    printf("Enter amount: ");
    scanf("%f", &amount);

    if (choice == 1)
        withdraw(&balance, amount);
    else if (choice == 2)
        deposit(&balance, amount);
    else
        printf("Invalid transaction type.\n");

    printf("Final account balance: %.2f\n", balance);
    return 0;
}
