#include <stdio.h>
#include <string.h>

int main(void) {
    char email[100], domain[100];
    char *at;

    printf("Enter email address: ");
    scanf("%99s", email);

    at = strchr(email, '@');
    if (at == NULL) {
        printf("Invalid Email Format\n");
        return 1;
    }

    strcpy(domain, at + 1);
    printf("Extracted Domain: %s\n", domain);
    return 0;
}
