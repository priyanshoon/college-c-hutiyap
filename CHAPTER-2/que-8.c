#include <stdio.h>
#define MAX_LIMIT 20

int main() {
    int customer_id, unit;
    float total_amount, surcharge;
    char name[MAX_LIMIT];
    surcharge = 100;
    printf("Enter your customer id: ");
    scanf("%d", &customer_id);
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your unit : ");
    scanf("%d", &unit);

    printf("Customer IDNO : %d\n", customer_id);
    printf("Customer Name : %s\n", name);
    printf("unit Consumed : %d\n", unit);

    if (unit <= 199) {
        total_amount = unit * 1.20;
        printf("Amount Charges @Rs. 1.20 per unit : %.2f\n", total_amount);
        printf("Surchage Amount : %.2f\n", surcharge);
        printf("Net Amount Paid By the Customer : %f\n", surcharge + total_amount);
    } else if (unit >= 200 && unit < 400) {
        total_amount = unit * 1.50;
        printf("Amount Charges @Rs. 1.50 per unit : %.2f\n", total_amount);
        printf("Surchage Amount : %.2f\n", surcharge);
        printf("Net Amount Paid By the Customer : %f\n", surcharge + total_amount);
    } else if (unit >= 400 && unit < 600) {
        total_amount = unit * 1.80;
        surcharge = 0.15 * total_amount;
        printf("Amount Charges @Rs. 1.80 per unit : %.2f\n", total_amount);
        printf("Surchage Amount : %.2f\n", surcharge);
        printf("Net Amount Paid By the Customer : %f\n", surcharge + total_amount);
    } else {
        total_amount = unit * 2.00;
        surcharge = 0.15 * total_amount;
        printf("Amount Charges @Rs. 2.00 per unit : %.2f\n", total_amount);
        printf("Surchage Amount : %.2f\n", surcharge);
        printf("Net Amount Paid By the Customer : %f\n", surcharge + total_amount);

    }

    return 0;
}
