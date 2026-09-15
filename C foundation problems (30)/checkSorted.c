#include <Stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int n;
    
    scanf("%d",&n);
    int a[n],b[n],c=0;
    for(int i=0;i<n;i++)
    {
    printf("Enter the element %d: ",i+1);
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
    printf("Is the array sorted? ");
    for (int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        c++;
    }
    if(c==0)
    printf("Sorted");
    else
    printf("Not sorted");
}