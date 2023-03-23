#include <stdio.h>

int factorial(int n) {
	int val = 1;
	for (int i = n; i > 1; i--) {
		val *= i;
	}
	return val;
}

int main() {
	int n;
	printf("Enter your number: ");
	scanf("%d", &n);
	int factorialResult = factorial(n);
	printf("The value of factorial is %d\n", factorialResult);
	return 0;
}