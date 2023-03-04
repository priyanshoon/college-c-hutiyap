#include <stdio.h>

int main() {
    int num;
    printf("Enter your number: \n");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("number is divisible by both 3 and 5\n");
    } else if (num % 3 == 0 && num % 5 != 0) {
        printf("Number is divisible by 3 but not 5\n");
    } else if (num % 3 != 0 && num % 5 == 0) {
        printf("Number is divisible by 5 but not 3\n");
    } else {
        printf("number is not divisible by 3 nor 5\n");
    }

    return 0;
}
