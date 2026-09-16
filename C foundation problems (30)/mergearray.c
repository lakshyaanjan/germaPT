#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the length of array 1: ");
    scanf("%d",&n);
    printf("Enter the length of array 2: ");
    scanf("%d",&m);
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d of array 1: ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        printf("Enter the element %d of array 2: ",i+1);
        scanf("%d",&b[i]);
    }
    int c=n+m;
    int d[c];
    for(int i=0;i<c;i++)
    {
        if(i<n)
        d[i]=a[i];
        else
        d[i]=b[i-n];
    }
    printf("The merged array: ");
    for(int i=0;i<c;i++)
    {
        printf("%d ",d[i]);
    }
}