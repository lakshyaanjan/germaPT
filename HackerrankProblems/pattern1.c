#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    printf("Enter the number of rows/columns: ");
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int x=((n-1)*2)+1;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            int top=i;
            int left=j;
            int bottom=x-i-1;
            int right=x-1-j;
            int min=top;
            if(left<min)
            min=left;
            if(bottom<min)
            min=bottom;
            if(right<min)
            min=right;
            printf("%d ",n-min);
        }
        printf("\n");
    }
    return 0;
}
