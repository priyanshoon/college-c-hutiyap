#include <stdio.h>

int main() {
    int side_1, side_2, side_3, total;
    scanf("%d %d %d", &side_1, &side_2, &side_3);
    total = side_3 + side_2 + side_1;
    if (total == 180) {
        printf("tringale is valid\n");
    } else {
        printf("tringle is not valid\n");
    }
    return 0;
}

