#include<stdio.h>

int maximum_num(int arr[], int n) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int minimum_num(int arr[], int n) {
    int min = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int even_count(int arr[], int n) {
    int even_num = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_num++;
        }
    }
    return even_num;
}

int prime_detect(int m) {
    for (int i = 2; i*i <= m; i++) {
        if (m % i == 0) {
            return 0;
        }
    }
    return 1;
}

void prime_arr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (prime_detect(arr[i])) {
            printf("[%d] ", arr[i]);
        }
    }
}


int main() {
    int n = 5;
    int arr[] = {5, 2, 44, 6, 33};

    int maximumNumber = maximum_num(arr, n);
    printf("maximum number is : %d\n", maximumNumber);

    int minimumNumber = minimum_num(arr, n);
    printf("minimum number is : %d\n", minimumNumber);

    int evenCount = even_count(arr, n);
    printf("total number of even no in arr are: %d\n", evenCount);

    prime_arr(arr, n);
    printf("\n");

    return 0;
}
