#include <stdio.h>

int main() {
    char secret_messages[3][100] = {"", "", ""};  /* initialized so a failed scan leaves an empty string */
    int i, j;
    int spaces, words, inWord;

    for (i = 0; i < 3; i++) {
        printf("Enter secret message %d (A-Z and spaces only): ", i + 1);

        /* Stops automatically at the first character not in A-Z or space */
        scanf(" %99[A-Z ]", secret_messages[i]);

        /* Discard the rest of the line (the invalid part) so the next input starts clean */
        scanf("%*[^\n]");
    }

    printf("\n========== FILTERED MESSAGES ==========\n");

    for (i = 0; i < 3; i++) {
        spaces = 0;
        words = 0;
        inWord = 0;

        for (j = 0; secret_messages[i][j] != '\0'; j++) {
            if (secret_messages[i][j] == ' ') {
                spaces++;
                inWord = 0;
            } else if (inWord == 0) {
                words++;       /* a new word starts here */
                inWord = 1;
            }
        }

        printf("Message %d: \"%s\"\n", i + 1, secret_messages[i]);
        printf("   Spaces: %d | Words: %d\n", spaces, words);
    }

    return 0;
}
