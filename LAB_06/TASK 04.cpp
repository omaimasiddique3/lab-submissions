#include <stdio.h>

int main() {
    int n, temp, rev = 0;
    printf("Enter book code: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (rev == n) printf("%d is a palindrome. Code is valid.\n", n);
    else printf("%d is not a palindrome. Code is invalid.\n", n);
    return 0;
}
