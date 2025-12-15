#include<stdio.h>

int main()
{
    int n,i;
    
    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // checking peak element
    for(i=0;i<n;i++)
    {
        if( (i==0 && arr[i]>=arr[i+1]) || 
            (i==n-1 && arr[i]>=arr[i-1]) ||
            (arr[i]>=arr[i-1] && arr[i]>=arr[i+1]) )
        {
            printf("Peak element is %d at index %d\n",arr[i],i);
            return 0;
        }
    }

    printf("No peak found\n");
    return 0;
}
