#include <stdio.h>

int main() {
    int type;
    float temp;
    printf("to convert celsius to fahrenheit press '1'\n");
    printf("to convert fahrenheit to celsius press '2'");
    scanf("%d", &type);;

    printf("Enter the temperature your want to convert: ");
    scanf("%f", &temp);

    switch (type) {
        case 1:
            printf("celsius to fahrenheit : %.2f\n", 1.8*temp+32);
            break;
        case 2:
            printf("fahrenheit to celsius : %.2f\n", 0.56*(temp-32));
            break;
        default:
            printf("kya kar raha hai bhai tu!\n");
    }

    return 0;
}
