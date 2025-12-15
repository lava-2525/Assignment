#include<stdio.h>

int main() {
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("\nOriginal: a = %d , b = %d\n",a,b);

    // 1) Temporary variable
    int t = a;
    a = b;
    b = t;
    printf("After TEMP: a = %d , b = %d\n",a,b);

    // 2) Arithmetic method (no temp)
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After ARITHMETIC: a = %d , b = %d\n",a,b);

    // 3) Bitwise XOR method (no temp)
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After XOR: a = %d , b = %d\n",a,b);

    // 4) Pointer method 
    t = *(&a);
    *(&a) = *(&b);
    *(&b) = t;
    printf("After POINTER: a = %d , b = %d\n",a,b);

    return 0;
}
