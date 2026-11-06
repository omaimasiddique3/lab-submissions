#include <stdio.h>

int main(void) {
    char name[50];
    int accNo;
    float amount;
    FILE *fptr;

    printf("Enter Customer Name: ");
    scanf(" %49[^\n]", name);
    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    printf("Enter Withdrawal Amount: ");
    scanf("%f", &amount);

    fptr = fopen("bank_log.txt", "a");
    if (fptr == NULL) {
        printf("Error: Unable to open bank_log.txt\n");
        return 1;
    }

    fprintf(fptr, "Name: %s | Account: %d | Withdrawal: %.2f\n", name, accNo, amount);
    fclose(fptr);

    printf("Transaction logged successfully.\n");
    return 0;
}
