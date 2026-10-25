#include <stdio.h>

int main(void) {
    int image[3][3];
    int (*ptr)[3] = image;
    int i, j;

    printf("Enter 9 pixel values:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", *(ptr + i) + j);

    // To increase brightness we will multiply each pixel by 2
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            *(*(ptr + i) + j) *= 2;

    printf("\nUpdated image matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%4d ", *(*(ptr + i) + j));
        printf("\n");
    }
    return 0;
}
