#include<stdio.h>

void arr_frequency(int arr[], int n) {
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

    arr_frequency(arr, n);

    return 0;
}
