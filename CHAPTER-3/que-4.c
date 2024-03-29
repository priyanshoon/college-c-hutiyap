#include <stdio.h>

int isPrime(int n) {
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n1, n2;
    printf("Enter your first number: ");
    scanf("%d", &n1);
    printf("Enter your second number: ");
    scanf("%d", &n2);

    printf("The prime number between %d to %d are: ", n1, n2);

    for (int i = n1; i <= n2; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");


    return 0;
}
