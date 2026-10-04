#include <Stdio.h>
int sumofdig(int n)
{
    int sum=0,temp;
    while(n>0)
    {
        temp=n%10;
        sum+=temp;
        n/=10;
    }
    return sum;
}
int prodofdig(int n)
{
    int prod=1,temp;
    while(n>0)
    {
        temp=n%10;
        prod*=temp;
        n/=10;
    }
    return prod;
}
int largestdig(int n)
{
    int num=0,temp;
    while(n>0)
    {
        temp=n%10;
        if(temp>num)
        num=temp;
        n/=10;
    }
    return num;
}
int smallestdig(int n)
{
    int num=9,temp;
    while(n>0)
    {
        temp=n%10;
        if(temp<num)
        num=temp;
        n/=10;
    }
    return num;
}
int evendig(int n)
{
    int temp,c=0;
    while(n>0)
    {
        temp=n%10;
        if(temp%2==0)
        c++;
        n/=10;
    }
    return c;
}
int odddig(int n)
{
    int temp,c=0;
    while(n>0)
    {
        temp=n%10;
        if(temp%2==1)
        c++;
        n/=10;
    }
    return c;
}
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Sum of the digits is: %d\n",sumofdig(a));
    printf("Product of the digits is: %d\n",prodofdig(a));
    printf("The largest digit is: %d\n",largestdig(a));
    printf("The smallest digit is: %d\n",smallestdig(a));
    printf("The number of even digits is: %d\n",evendig(a));
    printf("The number of odd digits is: %d\n",odddig(a));
}