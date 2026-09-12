#include <stdio.h>
int main()
{

    printf("Enter the total number of array elements ");
    int x;
    scanf("%d",&x);
    int n[x];
    printf("\nEnter array elements: ");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&n[i]);
    }
    int min=n[x-1];
    for(int i=0;i<x;i++)
    {
        if (n[i]<min)
        min=n[i];
    }
    printf("\nThe min is %d",min);
}