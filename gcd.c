#include <stdio.h>
int min(int a, int b)
{
    if (a>b)
    return b;
    else
    return a;
}
int main()
{
    printf("Enter the numbers of which GCD is to be computed: ");
    int a,b;
    scanf("%d %d",&a,&b);
    int x=min(a,b);
    int i;
    for(i=x;i>=0;i--)
    {
        if((a%i==0)&&(b%i==0))
        {
        printf("%d ",i);
        break;
        }
    }

}