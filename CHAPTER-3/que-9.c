#include <stdio.h>

void factors(int n) {
	for (int i = 1; i<n; i++) {
		if (n%i == 0) {
			printf("%d ", i);
		}
	}
}

void primeFactors(int n) {
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) {
            while (n%i == 0) {
                n = n/i;
            }
            printf("%d ", i);
        }
    }
}

int main() {
	int n;
	printf("Enter your number: ");
	scanf("%d", &n);
	factors(n);
	printf("\n");
	primeFactors(n);
	printf("\n");
	return 0;
}
