#include <Stdio.h>
int numofdig(int n)
{
    int c=0;
    while(n>0)
    {
        n/=10;
        c++;
    }
    return c;
}
int square(int n)
{
    return n*n;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=n;
    int num=numofdig(n);
    int sq=square(n);
    int nums=0;
    int temp;
    for(int i=0;i<num;i++)
    {
        temp=sq%10;
        nums=nums*10+temp;
        sq/=10;
    }
    int true=0;
    while(nums>0)
    {
        temp=nums%10;
        true=true*10+temp;
        nums/=10;
    }
    if(true==n)
    printf("The number is an Automorphic Number.");
    else
    printf("The number is not an Automorphic number.");
}