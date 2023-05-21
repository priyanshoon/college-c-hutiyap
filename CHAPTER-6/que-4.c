#include<stdio.h>

void arr_frequency(int arr[], int n) {
    int i, j, count = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
        count = 0;
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

    arr_frequency(arr, size);

    return 0;
}
