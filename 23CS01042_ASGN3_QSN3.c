#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three positive integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("These sides can form a triangle.\n");
    } else {
        printf("These sides cannot form a triangle.\n");
    }

    return 0;
}
