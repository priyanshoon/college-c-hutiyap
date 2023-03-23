#include <stdio.h>

int main() {
    // F0 = 0, F1 = 1, Fn = Fn-1 + Fn - 2
    int a=0;
    int b=1;
    int n;
    int result;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        result = a + b;
        a = b;
        b = result;
    }
    printf("\n");
    return 0;
}
