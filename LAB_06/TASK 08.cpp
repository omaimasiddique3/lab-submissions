#include <stdio.h>

#define MAX 20

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[MAX];
    int n = 8;

    // 2. Take 8 elements from the user
    printf("Enter 8 integers:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // 3. Print the complete array
    printf("\nArray: ");
    printArray(arr, n);

    // 4. Find largest and smallest
    int largest = arr[0], smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)  largest = arr[i];
        if (arr[i] < smallest) smallest = arr[i];
    }
    printf("Largest element : %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    // 5. Search for a number
    int key, found = -1;
    printf("\nEnter a number to search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }
    if (found != -1)
        printf("%d found at index %d\n", key, found);
    else
        printf("%d not found in the array\n", key);

    // 6. Insert a new number at a specific index
    int val, pos;
    printf("\nEnter the number to insert: ");
    scanf("%d", &val);
    printf("Enter the index to insert at (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n || n >= MAX) {
        printf("Invalid index for insertion!\n");
    } else {
        for (int i = n; i > pos; i--)
            arr[i] = arr[i - 1];   // shift right
        arr[pos] = val;
        n++;
        printf("Array after insertion: ");
        printArray(arr, n);
    }
}
    // 7.
