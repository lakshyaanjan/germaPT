#include <stdio.h>
int countDig(int n)
{
    int c=0;
    while(n>0)
    {
        n/=10;
        c++;
    }
    return c;
}
int calcPow(int n,int pow)
{

    int temp=1;
    for(int i=1;i<=pow;i++)
    {
        temp=temp*n;
    }
    return temp;
}
int isArmstrong(int n)
{
    int dig=countDig(n);
    int a=n,sum=0,temp;
    while(a>0)
    {
        temp=a%10;
        sum+=calcPow(temp,dig);
        a/=10;
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
        if (isArmstrong(i))
        printf("%d ",i);
    }
}