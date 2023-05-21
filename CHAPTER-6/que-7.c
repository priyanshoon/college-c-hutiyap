#include<stdio.h>

void element_insertion(int arr[], int n, int value) {
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > value) {
            pos = i;
        }
    }

    n++;
}

int main() {
    int arr[1000];
    int size, value;

    printf("Enter the no of element: ");
    scanf("%d", &size);

    printf("Enter the arr: \n");
    for (int i = 0; i < size; i++) {
        printf("element -> %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    element_insertion(arr, size, value);

    return 0;
}
