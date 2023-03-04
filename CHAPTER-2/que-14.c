#include <stdio.h>

int main() {
    int distance_coverd;
    printf("Enter the distance covered");
    scanf("%d", &distance_coverd);
    if (distance_coverd < 10) {
        printf("Fixed charge ₹80\n");
    } else if (distance_coverd >= 11 && distance_coverd < 20) {
        printf("you have to pay : %d\n", 6 * distance_coverd);
    } else if (distance_coverd >= 21 && distance_coverd < 30) {
        printf("you have to pay : %d\n", distance_coverd * 5);
    } else {
        printf("you have to pay : %d\n", distance_coverd * 4);
    }
    return 0;
}
