#include <stdio.h>
#include <string.h>

int main(void) {
    char user[50], pass[50];
    char fileUser[50], filePass[50];
    FILE *fptr;

    printf("Enter Username: ");
    scanf("%49s", user);
    printf("Enter Password: ");
    scanf("%49s", pass);

    fptr = fopen("credentials.txt", "r");
    if (fptr == NULL) {
        printf("Error: Cannot open credentials.txt\n");
        return 1;
    }

    fscanf(fptr, "%49s %49s", fileUser, filePass);

    if (strcmp(user, fileUser) == 0 && strcmp(pass, filePass) == 0)
        printf("Access Granted!\n");
    else
        printf("Access Denied!\n");

    fclose(fptr);
    return 0;
}
