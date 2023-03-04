#include<stdio.h>

int main() {
    int side1, side2, side3;
    printf("Enter your first side of triangle: ");
    scanf("%d", &side1);
    printf("Enter your second  side of triangle: ");
    scanf("%d", &side2);
    printf("Enter your third side of triangle: ");
    scanf("%d", &side3);

    if (side1 == side2 && side1 == side3 && side2 == side3) {
        printf("The trinagle is equilateral\n");
    } else if (side1 != side2 && side1 != side3 && side2 != side3) {
        printf("Scalen trinagle!\n");
    } else {
        printf("Isoseles triangle\n");
    }

    return 0;
}
