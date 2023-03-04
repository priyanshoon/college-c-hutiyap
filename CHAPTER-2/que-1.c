#include<stdio.h>

int main(void) {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Wrong Entry!\n");
    } else if (marks < 40) {
        printf("fail!\n");
    } else if (marks > 40 && marks < 49) {
        printf("Grade D\n");
    } else if (marks > 50 && marks < 59) {
        printf("Grade C\n");
    } else if (marks > 60 && marks < 69) {
        printf("Grade B\n");
    } else if (marks > 70 && marks < 79) {
        printf("Grade A\n");
    } else if (marks > 80 && marks < 89) {
        printf("Grade E\n");
    } else {
        printf("Grade O\n");
    }

    return 0;
}
