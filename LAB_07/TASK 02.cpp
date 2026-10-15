#include <stdio.h>

int main() {
    char logs[3][30];
    char username[3][30], status[3][30], timestamp[3][30];
    int i, j;
    int count = 0;

    printf("Enter 3 CSV log entries (format: username,status,timestamp)\n");

    for (i = 0; i < 3; i++) {
        printf("Log %d: ", i + 1);
        /* single scanf splits the entry into three strings */
        scanf(" %[^,],%[^,],%[^\n]", username[i], status[i], timestamp[i]);

        /* store the fields in the 2D logs array (as the log matrix) */
        sprintf(logs[i], "%s,%s,%s", username[i], status[i], timestamp[i]);
    }

    /* Count uppercase letters across entire log matrix */
    for (i = 0; i < 3; i++) {
        for (j = 0; logs[i][j] != '\0'; j++) {
            if (logs[i][j] >= 'A' && logs[i][j] <= 'Z') {
                count++;
            }
        }
    }

    printf("\nTotal uppercase letters: %d\n", count);

    return 0;
}
