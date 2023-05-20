#include<stdio.h>

void swap(int* xp, int*yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sort_arr(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void printf_arr(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    int arr[1000];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the arr: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort_arr(arr, n);
    printf("Sorted array: ");
    printf_arr(arr, n);

    return 0;
}
