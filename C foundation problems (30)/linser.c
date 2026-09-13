#include <stdio.h>
int main()
{
    printf("Enter the total number of array elements ");
    int x;
    scanf("%d",&x);
    int n[x];
    printf("Enter array elements: ");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("Enter the array element to be searched ");
    int s;
    scanf("%d",&s);
    for(int j=0;j<x;j++)
    {
        if(s==n[j])
        {
            printf("Element found at position %d",j+1);
            break;
        }
    }
}