#include <math.h>
#include <stdio.h>

int main() {
    int i, d, c = 0, s = 0, r = 0, n, p, ps=0;
    printf("Enter your number: ");
    scanf("%d", &n);

    for (i = n; i > 0; i=i/10) {
        d = i % 10;
        c = c + 1;
        s = s +d;
        r = r*10+d;
    }

    for (i = n; i != 10; i=i/10) {
        d = i % 10;
        p = pow(d, c);
        printf("%d\n", p);
        ps = ps + p;
        p = 0;
    }

    printf("Number of digit : %d\n ", c);
    printf("Sum of digit: %d\n", s);
    printf("Reverse of the number: %d\n", r);
    printf("powersum of the number : %d\n", ps);

    if (r == n) {
        printf("Number is palindrom!\n");
    } else {
        printf("The number is not palindrom!\n");
    }

    if (n == ps) {
        printf("Armstrong!\n");
    } else {
        printf("Not armstrong!\n");
    }

}
