#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("All three numbers are equal and greatest: %d\n", a);
    }
    else if (a >= b && a >= c) {
        if (a == b || a == c)
            printf("Two numbers are equal and greatest: %d\n", a);
        else
            printf("Greatest number is: %d\n", a);
    }
    else if (b >= a && b >= c) {
        if (b == c)
            printf("Two numbers are equal and greatest: %d\n", b);
        else
            printf("Greatest number is: %d\n", b);
    }
    else {
        printf("Greatest number is: %d\n", c);
    }
    return 0;
}