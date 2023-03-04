#include <stdio.h>

int main() {
    int i, count_odd = 0, count_even = 0;
    int num[10];
    printf("Enter 10 integers here: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 10; i++) {
        if (num[i] % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
    }

    printf("Even: %d\n", count_even);
    printf("Odd: %d\n", count_odd);

    return 0;
}
