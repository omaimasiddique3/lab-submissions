#include <stdio.h>

int main() {
    long long n;
    int even = 0, odd = 0, d;
    printf("Enter a number: ");
    scanf("%lld", &n);
    if (n < 0) n = -n;
    if (n == 0) even = 1;
    while (n > 0) {
        d = n % 10;
        if (d % 2 == 0) even++;
        else odd++;
        n /= 10;
    }
    printf("Even digits: %d\n", even);
    printf("Odd digits : %d\n", odd);
    return 0;
}
