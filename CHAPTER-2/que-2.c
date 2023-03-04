#include <stdio.h>

int main() {
    int sales_amount;
    printf("Enter your sales amount: ");
    scanf("%d", &sales_amount);
    int commisison_amount;

    if (sales_amount < 500) {
        printf("Commisison amount : 35₹\n");
    } else if (sales_amount > 500 && sales_amount < 2000) {
        commisison_amount = (10/100)*sales_amount;
        printf("Commisison amount : %d\n", commisison_amount);
    } else if (sales_amount > 2001 && sales_amount < 5000) {
        commisison_amount = (15/100)*sales_amount;
        printf("Commisison amount : %d\n", commisison_amount);
    } else {
        commisison_amount = (20/100)*sales_amount;
        printf("Commisison amount : %d\n", commisison_amount);
    }
    return 0;
}
