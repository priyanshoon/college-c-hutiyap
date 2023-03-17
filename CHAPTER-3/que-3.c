#include <stdio.h>

int main() {
    int n, isPrime = 1;
    printf("Enter the number n: ");
    scanf("%d", &n);

    for (int i = 2; i*i < n; i++) {
        if (n%i == 0) {
            isPrime = 0;
        }
    }

    if (isPrime) {
        printf("The number %d is prime!\n", n);
    } else {
        printf("The number %d is no prime!\n", n);
    }

    return 0;
}
