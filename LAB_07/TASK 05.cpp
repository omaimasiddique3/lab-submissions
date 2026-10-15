#include <stdio.h>

int main() {
    char sentences[3][100];
    int i, j;
    int vowels;
    char ch;

    printf("Enter a paragraph with 3 sentences separated by semicolons:\n");

    for (i = 0; i < 3; i++) {
        sentences[i][0] = '\0';                /* safe default if a read fails */

        /* Stop at ';' OR newline, so the last sentence doesn't hang */
        scanf(" %99[^;\n]", sentences[i]);

        /* Discard the delimiter (';' or the final newline) */
        scanf("%*c");
    }

    printf("\n========== VOWEL ANALYSIS ==========\n");

    for (i = 0; i < 3; i++) {
        vowels = 0;

        for (j = 0; sentences[i][j] != '\0'; j++) {
            ch = sentences[i][j];

            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            }
        }

        printf("Sentence %d: \"%s\"\n", i + 1, sentences[i]);
        printf("   Vowels: %d\n", vowels);
    }

    return 0;
}
