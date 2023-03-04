#include <stdio.h>
#include <math.h>

int main() {
    double x, result;
    printf("Enter your x: ");
    scanf("%lf", &x);
    result = sin(1/x);
    printf("Value of sin(1/x) is %.4lf\n", result);
    return 0;
}
