#include <Stdio.h>
int main()
{
    int a,rev=0,sum=0,num=0,l=0,temp;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a>0)
    {
        temp=a%10;
        if(temp>l)
        l=temp;
        sum+=temp;
        num++;
        rev=rev*10+temp;
        a/=10;
    }
    printf("Reverse of the number is: %d\n",rev);
    printf("Sum of the digits is: %d\n",sum);
    printf("The number of digits is %d\n",num);
    printf("Largest digit is: %d\n",l);
}