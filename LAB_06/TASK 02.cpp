#include <stdio.h>

int main() {
    int n, rev = 0;
    printf("Enter ticket number: ");
    scanf("%d", &n);
    int neg = (n < 0);
    if (neg) n = -n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("Reversed number: %s%d\n", neg ? "-" : "", rev);
    return 0;
}
