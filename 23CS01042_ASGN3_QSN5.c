#include <stdio.h>

int main() {
    int daysLate;
    printf("Enter the number of days the member is late to return the book: ");
    scanf("%d", &daysLate);
    if (daysLate <= 0) {
        printf("No fine. Thank you for returning the book on time!\n");
    } else if (daysLate <= 5) {
        printf("Fine: %d rupee(s).\n", daysLate);
    } else if (daysLate <= 10) {
        printf("Fine: 5 rupees.\n");
    } else if (daysLate <= 30) {
        printf("Fine: 10 rupees. Your membership will be canceled.\n");
    } else {
        printf("Your membership has been canceled due to excessive delay (more than 30 days).\n");
    }

    return 0;
}
