#include <stdio.h>
#include <math.h>
int main()
{
    int nu, originalnu, n = 0, remainder;
    double result = 0.0;
    printf("Enter the number: ");
    scanf("%d", &nu);
    originalnu = nu;
    while (originalnu != 0)
    {
        originalnu = originalnu / 10;
        ++n;
    }
    originalnu = nu;

    while (originalnu != 0)
    {
        remainder = originalnu % 10;
        result = result + pow(remainder, n);
        originalnu /= 10;
    }
    if ((int)result == nu)
    {
        printf("The number is a armstrong.");
    }
    else
    {
        printf("The number is not a armstrong.");
    }

    return 0;
}
