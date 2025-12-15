#include<stdio.h>

int main()
{
    int n;
    int first = 0, second = 1, next, i;

    printf("Enter how many terms you want in Fibonacci Series: ");
    scanf("%d",&n);

    printf("Fibonacci Series: ");

    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("%d ",first);
            continue;
        }
        if(i==2)
        {
            printf("%d ",second);
            continue;
        }

        next = first + second;
        printf("%d ",next);

        first = second;
        second = next;
    }

    return 0;
}
