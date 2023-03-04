#include <stdio.h>
#define MAX_LIMIT 20

int main() {
    float amount;
    char name[MAX_LIMIT];
    char type;

    printf("Enter your amount: ");
    scanf("%f", &amount);
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Press L for laptop or P for PC's: ");
    scanf("%s", &type);

    printf("Name : %s\n", name);

    switch (type) {
        case 'l':
            if (amount <= 25000) {
                printf("Net amount is : %.2f\n", amount - ((amount * 0.0) / 100));
            } else if (amount >= 25001 && amount <= 50000) {
                printf("Net amount is : %.2f\n", amount - ((amount * 5.0) / 100));
            } else if (amount >= 50001 && amount <= 100000) {
                printf("Net amount is : %.2f\n", amount - ((amount * 7.5) / 100));
            } else {
                printf("Net amount is : %.2f\n", amount - ((amount * 10.0) / 100));
            }
            break;
        case 'p':
            if (amount <= 25000) {
                printf("Net amount is : %.2f\n", amount - ((amount * 5.0) / 100));
            } else if (amount >= 25001 && amount <= 50000) {
                printf("Net amount is : %.2f\n", amount - ((amount * 7.5) / 100));
            } else if (amount >= 50001 && amount <= 100000) {
                printf("Net amount is : %.2f\n", amount - ((amount * 10.0) / 100));
            } else {
                printf("Net amount is : %.2f\n", amount - ((amount * 15.0) / 100));
            }
            break;
        default:
            printf("Enter correct format\n");
    }
    return 0;
}
