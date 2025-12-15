#include<stdio.h>

int main()
{
    int n,i,element,pos,choice;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[100];   // taking big size so we can insert safely

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nArray before insertion:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    printf("\n\nEnter element to insert: ");
    scanf("%d",&element);

    printf("\nWhere to insert?\n1. Front\n2. Middle (enter position)\n3. End\nEnter choice: ");
    scanf("%d",&choice);

    if(choice == 1)
    {
        pos = 0;
    }
    else if(choice == 2)
    {
        printf("Enter position (0 to %d): ",n);
        scanf("%d",&pos);
    }
    else if(choice == 3)
    {
        pos = n;   // inserting at end
    }
    else
    {
        printf("Invalid Choice");
        return 0;
    }

    // shift elements to right
    for(i=n; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos] = element;
    n++;

    printf("\nArray after insertion:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
