#include <stdio.h>

int main() {
    int temp;
    printf("Enter your temperature: ");
    scanf("%d", &temp);
    if (temp < 0) {
        printf("Freezing Weather\n");
    } else if (temp > 0 && temp <= 10) {
        printf("Very Cold weather\n");
    } else if (temp > 10 && temp <= 20) {
        printf("Cold weather\n");
    } else if (temp > 20 && temp <= 30) {
        printf("Normal in Temp\n");
    } else if (temp > 30 && temp <= 40) {
        printf("Its Hot\n");
    } else {
        printf("Its very hot weather\n");
    }
    return 0;
}
