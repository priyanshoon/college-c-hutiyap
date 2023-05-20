#include<stdio.h>

void fibonacci(int n) {
    int a, b, c;
    a = 0;
    b = 1;
    c = a + b;
    for (int i = 1; i <= n; i++) {
        printf("%d, ", a);
        a = b;
        b = c;
        c = a + b;
    }
}

int prime_detect(int m) {
    for (int i = 2; i*i <= m; i++) {
        if (m % i == 0) {
            return 0;
        }
    }
    return 1;
}

void fibonacci_prime(int n) {
    int a, b, c;
    a = 2;
    b = 3;
    c = a + b;
    for (int i = 1; i <= n; i++) {
        if (prime_detect(a)) {
            printf("[%d] ", a);
            a = b;
            b = c;
            c = a + b;
        }
    }
}

int main() {
    printf("Here is the Fibonacci series upto to 10 terms :\n");
    fibonacci(10);
    printf("\nThe Prime Fibonacci Numbers are:\n");
    fibonacci_prime(10);
    return 0;
}
