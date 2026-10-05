#include <stdio.h>

int main() {
    int n, i;
    unsigned long long c = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n < 0 || n > 35) {
        printf("Please enter n between 0 and 35.\n");
        return 0;
    }
    for (i = 0; i < n; i++)
        c = c * 2 * (2 * i + 1) / (i + 2);   /* C(i+1) from C(i) */
    printf("Catalan number C(%d) = %llu\n", n, c);
    return 0;
}
