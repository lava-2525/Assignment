#include <stdio.h>

int main() {
    int choice;
    long decimal, binary, temp, base, rem, result;

    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    if(choice == 1) {

        printf("Enter Binary Number: ");
        scanf("%ld",&binary);

        temp = binary;
        decimal = 0;
        base = 1;   // this is 2^0

        // binary -> decimal
        while(temp > 0) {
            rem = temp % 10;
            decimal = decimal + rem * base;
            base = base * 2;
            temp = temp / 10;
        }

        printf("Decimal Value = %ld\n", decimal);
    }

    else if(choice == 2) {

        printf("Enter Decimal Number: ");
        scanf("%ld",&decimal);

        temp = decimal;
        binary = 0;
        base = 1;

        // decimal -> binary
        while(temp > 0) {
            rem = temp % 2;
            binary = binary + rem * base;
            base = base * 10;
            temp = temp / 2;
        }

        printf("Binary Value = %ld\n", binary);
    }

    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
