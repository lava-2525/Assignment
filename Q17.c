#include<stdio.h>

int main()
{
    int n,i,pos,choice;

    printf("Enter number of elements : ");
    scanf("%d",&n);

    int arr[100];

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nArray before deletion:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    printf("\n\nWhere to delete?\n1. Front\n2. Middle (enter position)\n3. End\nEnter choice: ");
    scanf("%d",&choice);

    if(choice == 1)
    {
        pos = 0;
    }
    else if(choice == 2)
    {
        printf("Enter position (0 to %d): ",n-1);
        scanf("%d",&pos);
    }
    else if(choice == 3)
    {
        pos = n-1;
    }
    else
    {
        printf("Invalid Choice");
        return 0;
    }

    // shift elements to left
    for(i=pos;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }

    n--;  // size reduced

    printf("\nArray after deletion:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
