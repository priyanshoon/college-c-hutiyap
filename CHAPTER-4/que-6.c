#include <stdio.h>
#include <math.h>

int check_armstrong(int num) {
    int originalNum, remainder, n =0;
    float result = 0.0;

    originalNum = num;

    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= num;
    }

    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }

    if ((int)result == num) {
        return 1;
    } else {
        return 0;
    }

}

int main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        if (check_armstrong(i) == 1) {
            printf("%d, ", i);
        }
    }

    printf("%d", check_armstrong(370));

    return 0;
}
