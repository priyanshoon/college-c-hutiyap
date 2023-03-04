#include<stdio.h>

int main() {
    // write a c program to read the corrdinates (x, y) (in cartesian system)
    int x, y;
    // Coordinates      x, y
    // Quadrant 1 ----> +, +
    // Quadrant 2 ----> -, +
    // Quadrant 3 ----> -, -
    // Quadrant 4 ----> +, -
    printf("Enter your x coordinates: ");
    scanf("%d", &x);
    printf("Enter your y coordinates: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("Quadrant 1\n");
    } else if (x < 0 && y > 0) {
        printf("Quadrant 2\n");
    } else if (x < 0 && y < 0) {
        printf("Quadrant 3\n");
    } else {
        printf("Quadrant 4 \n");
    }

    return 0;
}
