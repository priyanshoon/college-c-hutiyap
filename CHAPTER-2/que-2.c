#include <stdio.h>

int main() {
    float sales_amount;
    printf("Enter your sales amount: ");
    scanf("%f", &sales_amount);
    float commisison_amount;

    if (sales_amount < 500) {
        printf("Commisison amount : 35₹\n");
    } else if (sales_amount > 500 && sales_amount < 2000) {
        commisison_amount = 0.1*sales_amount;
        printf("Commisison amount : %.2f\n", commisison_amount);
    } else if (sales_amount > 2001 && sales_amount < 5000) {
        commisison_amount = 0.15*sales_amount;
        printf("Commisison amount : %.2f\n", commisison_amount);
    } else {
        commisison_amount = 0.2*sales_amount;
        printf("Commisison amount : %.2f\n", commisison_amount);
    }
    return 0;
}
