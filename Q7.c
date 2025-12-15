#include<stdio.h>

int main()
{
    int i,j,rows=5;

    for(i=1;i<=rows;i++)
    {
        // left pattern
        for(j=1;j<=i;j++)
        {
            printf("%d", (j%2==0));
        }

        // middle spaces
        for(j=1;j<=2*(rows-i);j++)
        {
            printf(" ");
        }

        // right pattern
        for(j=1;j<=i;j++)
        {
            printf("%d", (j%2==0));
        }

        printf("\n");
    }

    return 0;
}
