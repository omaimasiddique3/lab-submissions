#include <stdio.h>

int main() {
    char word_grid[3][100];
    char longestWord[100] = "";
    int i, j, k;
    int len, start, col;
    int maxLen = 0, maxRow = -1, maxCol = -1;

    for (i = 0; i < 3; i++) {
        printf("Enter row %d (3 space-separated words): ", i + 1);
        scanf(" %99[^\n]", word_grid[i]);
    }

    /* Tokenize each row manually */
    for (i = 0; i < 3; i++) {
        len = 0;
        start = 0;
        col = 0;

        for (j = 0; ; j++) {
            if (word_grid[i][j] == ' ' || word_grid[i][j] == '\0') {
                /* a word just ended */
                if (len > 0) {
                    if (len > maxLen) {
                        maxLen = len;
                        maxRow = i;
                        maxCol = col;
                        for (k = 0; k < len; k++) {
                            longestWord[k] = word_grid[i][start + k];
                        }
                        longestWord[len] = '\0';
                    }
                    col++;
                    len = 0;
                }
                if (word_grid[i][j] == '\0') {
                    break;
                }
            } else {
                if (len == 0) {
                    start = j;   /* remember where this word begins */
                }
                len++;
            }
        }
    }

    printf("\nLongest word: %s\n", longestWord);
    printf("Length: %d\n", maxLen);
    printf("Position: Row Index (i) = %d, Column Index (j) = %d\n", maxRow, maxCol);

    return 0;
}
