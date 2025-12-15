#include<stdio.h>

int main()
{
    int n,i,pos = -1;
    printf("Enter number of elements : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d scores:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i] == 99)
        {
            pos = i;   // store position
            break;     // stop because we only need first 99
        }
    }

    if(pos != -1)
        printf("First 99 found at index %d\n",pos);
    else
        printf("Score 99 not found in array\n");

    return 0;
}
