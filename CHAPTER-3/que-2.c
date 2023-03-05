#include <stdio.h>

int main() {
    int n, i, sum=0;
    printf("Enter your number : ");
    scanf("%d", &n);
    printf("The first %d natural number are: \n", n);
    for (i = 1; i <= n; i++) {
        printf("%d", i);
        sum += i;
    }
    printf("\nThe Sum of natural numbers upto %d terms : %d \n",n,sum);
    printf("The avg of natural number upto %d terms : %d\n", n, sum/n);

    return 0;
}
