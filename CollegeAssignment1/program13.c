#include <stdio.h>

int isPerfect(int n)
{
    int a=n,sum=0;
    for(int i=1;i<n;i++)
    {
        if(a%i==0)
        sum+=i;
    }
    if(sum==n)
    return 1;
    else return 0;
}
int main()
{
    printf("Enter the lower limit: ");
    int l;
    scanf("%d",&l);
    printf("Enter the upper limit: ");
    int r;
    scanf("%d",&r);
    for(int i=l;i<=r;i++)
    {
        if (isPerfect(i))
        printf("%d ",i);
    }
}