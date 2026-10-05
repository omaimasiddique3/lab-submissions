#include <stdio.h>

int main() {
    int pin, temp, sum = 0;
    printf("Enter a 4-digit PIN: ");
    scanf("%d", &pin);
    if (pin < 1000 || pin > 9999) {
        printf("Invalid PIN! Enter exactly 4 digits.\n");
        return 0;
    }
    temp = pin;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    if (sum > 10) printf("Strong PIN\n");
    else printf("Weak PIN\n");
    return 0;
}
