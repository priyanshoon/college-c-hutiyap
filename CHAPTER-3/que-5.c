#include <stdio.h>

int main() {
	int n, i;
	printf("Enter your number: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
	}
	return 0;
}
