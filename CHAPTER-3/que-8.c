#include <stdio.h>

int main() {
	// A Perfect Number “n”, is a positive integer which is equal to the sum of its factors, excluding “n” itself.
	int n, sum=0;
	printf("Enter your number: ");
	scanf("%d", &n);
	for (int i = 1; i<n; i++) {
		if (n%i == 0) {
			printf("%d ", i);
			sum += i;
		}
	}
    printf("Sum of divisor: %d", sum);
	if (sum == n) {
		printf("Number is perfect!\n");
	} else {
		printf("The number is not perfect!\n");
	}
	return 0;
}
