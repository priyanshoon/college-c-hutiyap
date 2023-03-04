#include <stdio.h>

int main() {
    int i;
    int num[10];
    printf("Enter 5 integers here: ");
    for (i = 0; i < 9; ++i) {
        scanf("%d", &num[i]);
    }


    return 0;
}
