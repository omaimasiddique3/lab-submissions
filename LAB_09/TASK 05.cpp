#include <stdio.h>

void printSensorData(void *data, char type) {
    if (type == 'f') {
        float *t = (float *)data;
        printf("Temperature: %.1f C\n", *t);
    } else if (type == 'i') {
        int *m = (int *)data;
        if (*m == 1)
            printf("Motion Detected\n");
        else if (*m == 0)
            printf("No Motion\n");
        else
            printf("Invalid motion value\n");
    } else if (type == 'c') {
        char *d = (char *)data;
        if (*d == 'O')
            printf("Door Open\n");
        else if (*d == 'C')
            printf("Door Closed\n");
        else
            printf("Invalid door value\n");
    } else {
        printf("Unknown data type\n");
    }
}

int main(void) {
    float temperature = 26.5f;
    int motion = 1;
    char door = 'C';

    printSensorData(&temperature, 'f');
    printSensorData(&motion, 'i');
    printSensorData(&door, 'c');
    return 0;
}
