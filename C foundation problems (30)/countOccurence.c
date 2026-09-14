#include <stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int n;
    
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
    printf("Enter the element %d: ",i+1);
    scanf("%d",&a[i]);
    }
    printf("Enter the number whose occurences need to be counted ");
    int x;
    scanf("%d",&x);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if (a[i]==x)
        c++;
    }
    printf("The number of occurence of %d in the array is %d.",x,c);

}