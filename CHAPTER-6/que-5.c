#include<stdio.h>

int duplicate_arr(int arr[], int n) {
    int i, j, count = 0, count_fr = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        count_fr = count;
        count = 0;
    }
    return count_fr;
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

    int duplicateArr = duplicate_arr(arr, size);
    printf("Total number of duplicate element found in arr : %d\n", duplicateArr);

    return 0;
}
