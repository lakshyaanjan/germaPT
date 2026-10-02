#include<stdio.h>
int gcd(int a,int b)
{
    int c=a-b;
    if(c<0)
    c=-c;
    for(int i=c;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        return i;
    }
}
int main()
{
    printf("Enter thw two numbers: ");
    int a,b;
    scanf("%d %d",&a,&b);
    int g=gcd(a,b);
    printf("The GCD of the numbers is: %d\n",g);
    int l=a*b/g;
    printf("The LCM of the two numbers is: %d",l);
}