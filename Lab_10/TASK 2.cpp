#include <stdio.h>
#include <string.h>

#define N 10

int main(void) {
    char names[N][50], temp[50];
    int i, j;

    printf("Enter %d student names:\n", N);
    for (i = 0; i < N; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nSorted Roster (A to Z):\n");
    for (i = 0; i < N; i++)
        printf("%2d. %s\n", i + 1, names[i]);
    return 0;
}
