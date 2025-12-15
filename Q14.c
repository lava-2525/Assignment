#include<stdio.h>

int main()
{
    int n,i,j,count=0,primeCount=0;

    printf("Enter number of elements : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i] < 2)  // 0 and 1 not prime
            continue;

        int isPrime = 1;  // assume prime

        for(j=2 ; j*j <= arr[i] ; j++)
        {
            if(arr[i] % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1)
            primeCount++;
    }

    printf("Total prime numbers in array = %d\n",primeCount);

    return 0;
}
