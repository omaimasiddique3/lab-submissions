#include <stdio.h>
#include <string.h>

int main(void) {
    char review[500], updated[1000];
    char *pos, *cur;

    printf("Enter customer feedback: ");
    fgets(review, sizeof(review), stdin);
    review[strcspn(review, "\n")] = '\0';

    printf("Total characters: %zu\n", strlen(review));

    int hasGood = (strstr(review, "good") != NULL);
    int hasBad  = (strstr(review, "bad")  != NULL);

    if (hasGood && hasBad) printf("Sentiment Report: Mixed\n");
    else if (hasGood)      printf("Sentiment Report: Positive\n");
    else if (hasBad)       printf("Sentiment Report: Negative\n");
    else                   printf("Sentiment Report: Neutral\n");

    if (hasBad) {
        updated[0] = '\0';
        cur = review;
        while ((pos = strstr(cur, "bad")) != NULL) {
            strncat(updated, cur, pos - cur);
            strcat(updated, "not good");
            cur = pos + strlen("bad");
        }
        strcat(updated, cur);
        strcpy(review, updated);
        printf("Updated Review: %s\n", review);
    }
    return 0;
}
