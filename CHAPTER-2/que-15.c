#include <stdio.h>

int main() {
    float eng, math, sci, percentage, eng_sci, mathper;
    printf("Enter the marks obtain in eng, math, sci: ");
    scanf("%f %f %f", &eng, &math, &sci);
    percentage = ((eng + math + sci) / 300) * 100;
    eng_sci = ((eng + sci) / 200) * 100;

    if (percentage >= 80) {
        printf("Pure Science\n");
    } else if (eng_sci >= 80 && math >= 60) {
        printf("Bio Science\n");
    } else {
        printf("Commerce\n");
    }

    return 0;
}
