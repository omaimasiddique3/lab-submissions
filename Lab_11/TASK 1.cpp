#include <stdio.h>

int calculateChecksum(int transactionID) {
    if (transactionID < 10) {
        return transactionID;
    }
    int sum = 0;
    int temp = transactionID;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return calculateChecksum(sum);
}

int main() {
    int id = 9875;
    printf("Checksum of %d is %d\n", id, calculateChecksum(id));
    return 0;
}
