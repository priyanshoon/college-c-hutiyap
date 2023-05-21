#include<stdio.h>

void even_arr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
}

void odd_arr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
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

    printf("The Even elements of EVEN array are : ");
    even_arr(arr, size);
    printf("\nThe Odd elements of ODD array are : ");
    odd_arr(arr, size);

    return 0;
}
