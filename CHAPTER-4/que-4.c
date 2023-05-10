#include <math.h>
#include <stdlib.h>
#include <stdio.h>

float factorial(int n) {
    int val = 1;
    for (int i = n; i > 1; i--) {
        val *= i;
    }
    return val;
}


int main() {
    float even_count=2, x, sum=1, psum;
    int n, sign=1;
    printf("Input the vaule of x: ");
    scanf("%f", &x);
    printf("Input the number of term: ");
    scanf("%d", &n);

    printf("Number of terms = %d\n", n);
    printf("value of x = %f\n", x);

    for (int i = 1; i < n; i++) {
        sign = sign * (-1);
        psum = sign * pow(x, even_count)/factorial(even_count);
        sum = sum + psum;
        even_count += 2;
    }

    printf("the sum = %f\n", sum);

}
