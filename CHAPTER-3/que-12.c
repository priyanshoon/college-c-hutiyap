#include <stdio.h>

int checkPrime(int n) {
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i =2; i <= n/2; i++) {
        if (checkPrime(i) == 1) {
            if (checkPrime(n - i) == 1) {
                printf("%d = %d + %d\n", n, i, n-i);
                flag = 1;
            }
        }
    }

    if (flag == 0) {
        printf("%d cannot written as the sum of two prime numbers.\n", n);
    }

    return 0;
}
