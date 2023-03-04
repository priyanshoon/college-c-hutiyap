#include <stdio.h>

int main() {
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);
    if (x < 0) {
        x = -1 * x;
    }
    printf("%d\n", x);
    return 0;
}
