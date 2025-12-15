#include<stdio.h>

int main()
{
    int n,i,even_index=0,odd_index=0;
    
    printf("Enter number of scores : ");
    scanf("%d",&n);

    int scores[n], even_array[n], odd_array[n];

    printf("Enter %d scores:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&scores[i]);
    }

    for(i=0;i<n;i++)
    {
        if(scores[i] % 2 == 0)
        {
            even_array[even_index] = scores[i];
            even_index++;
        }
        else
        {
            odd_array[odd_index] = scores[i];
            odd_index++;
        }
    }

    printf("\nEven Scores : ");
    for(i=0;i<even_index;i++)
        printf("%d ",even_array[i]);

    printf("\nOdd Scores : ");
    for(i=0;i<odd_index;i++)
        printf("%d ",odd_array[i]);

    return 0;
}
