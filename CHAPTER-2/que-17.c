#include <stdio.h>

int main() {
    float total_invest, rate, time, maturity;
    printf("Enter your total investment: ");
    scanf("%f", &total_invest);
    printf("Enter your time period: ");
    scanf("%f", &time);

    time = time / 365;

    if (time <= 180) {
        rate = 5.5;
        maturity = total_invest + ((total_invest * time * rate) / 100);
        printf("total maturity amount will be : %.2f", maturity);
    } else if (time >= 181 && time < 364) {
        rate = 7.5;
        maturity = total_invest + ((total_invest * time * rate) / 100);
        printf("total maturity amount will be : %.2f", maturity);
    } else if (time == 365) {
        rate = 9.0;
        maturity = total_invest + ((total_invest * time * rate) / 100);
        printf("total maturity amount will be : %.2f", maturity);
    } else {
        rate = 8.5;
        maturity = total_invest + ((total_invest * time * rate) / 100);
        printf("total maturity amount will be : %.2f", maturity);
    }
    return 0;
}
