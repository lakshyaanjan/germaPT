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
    int sum=0;
    for(int i=0;i<x;i++)
    {
        sum+=n[i];
    }
    printf("The sum is %d",sum);
    double avg=sum/(double)x;
    printf("\nThe average is %lf",avg);
}