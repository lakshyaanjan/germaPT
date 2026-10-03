#include <Stdio.h>
#include <math.h>
int factorial(int n)
{
    int num=1;
    while(n>0)
    {
        num=num*n;
        n--;
    }
    return num;
}
int isPalin(int a)
{
    int b=a;
    int rev=0,temp=0;
    while(b>0)
    {
        temp=b%10;
        rev=rev*10+temp;
        b/=10;
    }
    if(rev==a)
    return 1;
    else
    return 0;
}

int isStrong(int n)
{
    int a=n,num=0,temp;
    while(a>0)
    {
        temp=a%10;
        num=num+factorial(temp);
        a=a/10;
    }
    if(num==n)
    return 1;
    else return 0;
}
int isPerfect(int n)
{
    int temp,num=0,a=n;
    while(a>0)
    {
        temp=a%10;
        num=num+temp;
        a=a/10;
    }
    if(num==n)
    return 1;
    else
    return 0;
}
int isArmstrong(int a)
{
    int b=a,c=a,n=0,num=0,temp;
    int pow=1;
    while(b>0)
    {
        b/=10;
        n++;
    }
    while(c>0)
    {
        pow=1;
        temp=c%10;
        for(int i=1;i<=n;i++)
        {
            pow=pow*temp;
        }
        num+=pow;
        c=c/10;
    }
    if(num==a)
    return 1;
    else 
    return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(isPalin(n))
    printf("The number is a palindrome\n");
    else
    printf("The number is not a palindrome.\n");

    if(isArmstrong(n))
    printf("The number is an Armstrong number\n");
    else
    printf("The number is not an Armstrong number.\n");

    if(isStrong(n))
    printf("The number is a Strong number\n");
    else
    printf("The number is not a Strong number.\n");
    if(isPerfect(n))
    printf("The number is a Perfect number\n");
    else
    printf("The number is not a Perfect number.\n");
}