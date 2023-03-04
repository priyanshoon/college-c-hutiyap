#include<stdio.h>

int main() {
    int a, b, result;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);
    result = b%a;
    if (result == 0) {
        printf("%d\n", a/b);
    } else {
        printf("Division not possible\n");
    }
    return 0;
}
