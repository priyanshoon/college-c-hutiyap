#include <stdio.h>

int main() {
    int x, y, z, greatest;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y && x > z) {
        greatest = x;
    } else if (y > x && y > z) {
        greatest = y;
    } else {
        greatest = z;
    }

    if (x < 0 && y < 0 && z < 0) {
        printf("Greatest number is : %d\n", greatest);
        printf("Entered number is all negative\n");
    } else if (x > 0 && y > 0 && z > 0) {
        printf("Greatest number is : %d\n", greatest);
        printf("Entered number is all positive\n");
    } else {
        printf("Greatest number is : %d\n", greatest);
        printf("Entered number is all mixed\n");
    }

    return 0;
}
