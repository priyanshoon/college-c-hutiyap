#include <stdio.h>

int main() {
    int n, num = 0, sum = 0;
    printf("Enter your number of term: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        num = (10 * num) + 9;
        sum += num;
    }
    printf("%d", sum);
    return 0;
}
