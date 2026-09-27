#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter the number n: ");
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int size=2*n-1;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            int top=i;
            int bottom=size-1-i;
            int left=j;
            int right=size-1-j;
            int min=top;
            if(bottom<min)
            min=bottom;
            if(left<min)
            min=left;
            if(right<min)
            min=right;
            printf("%d ",n-min);
        }
        printf("\n");
    }
}