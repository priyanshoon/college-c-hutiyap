#include <stdio.h>
#include <math.h>

int main() {
    int x, n, odd_count=1, sum=0, sign=1;
    printf("Input the vaule of x: ");
    scanf("%d", &x);
    printf("Input the no of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += pow(x, odd_count) * sign;
        odd_count = odd_count + 2;
        sign = sign * (-1);
    }

    printf("the sum = %d\n", sum);

	return 0;

}
