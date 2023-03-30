#include <stdio.h>

int main() {
    int n;
    float sum;
    printf("Enter the no of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("1/%d +", i);
        sum += 1.0/i;

    }
    printf("\n");
    printf("Sum of harmonic series is : %f\n", sum);
    return 0;
}
