#include <stdio.h>

void printUniqueElements(int arr[], int size) {
    int i, j;
    int isUnique;

    printf("Unique elements in the array: ");

    for (i = 0; i < size; i++) {
        isUnique = 1;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0; // Not unique
                break;
            }
        }
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0; // Not unique
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[1000];
    int size;

    printf("Enter the no of element: ");
    scanf("%d", &size);

    printf("Enter the arr: \n");
    for (int i = 0; i < size; i++) {
        printf("element -> %d: ", i);
        scanf("%d", &arr[i]);
    }

    printUniqueElements(arr, size);
    return 0;
}

