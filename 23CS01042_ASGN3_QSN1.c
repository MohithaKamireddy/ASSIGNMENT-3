#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("The entered number is positive.\n");
    } else if (number < 0) {
        printf("The entered number is negative.\n");
    } else {
        printf("The entered number is zero.\n");
    }

    return 0;
}
