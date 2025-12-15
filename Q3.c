#include <stdio.h>

int subtract(int a, int b) {
    while (b != 0) {
        // borrow = (~a) & b
        int borrow = (~a) & b;

        // subtract without borrow (XOR)
        a = a ^ b;

        // shift borrow
        b = borrow << 1;
    }
    return a;
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    int result = subtract(x, y);
    printf("Subtraction (without '-') is: %d\n", result);

    return 0;
}
