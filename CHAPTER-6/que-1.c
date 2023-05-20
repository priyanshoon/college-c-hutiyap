#include<stdio.h>

int maximum_num(int arr[], int n) {
    int max = 0;
    for (int i = 0; i <= n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int minimum_num(int arr[], int n) {
    int min = arr[0];
    for (int i = 0; i <= n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        printf("%d\n", min);
    }
    return min;
}

int main() {
    int n = 5;
    int arr[] = {5, 2, 44, 6, 33};

    int maximumNumber = maximum_num(arr, n);
    printf("maximum number is : %d\n", maximumNumber);

    int minimumNumber = minimum_num(arr, n);
    printf("minimum number is : %d\n", minimumNumber);

    return 0;
}
