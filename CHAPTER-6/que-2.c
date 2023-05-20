#include<stdio.h>

void sort_arr(int arr[], int n) {

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

    return 0;
}
