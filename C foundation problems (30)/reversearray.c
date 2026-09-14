#include <Stdio.h>
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
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=a[n-i-1];
    }
    printf("The reverse array is:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    
}