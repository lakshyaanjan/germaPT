#include <stdio.h>
int main()
{
    printf("Enter three numbers: ");
    int a,b,c,max,min;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c)
    max=a;
    else if(b>=a&&b>=c)
    max=b;
    else if(c>=a&&c>=b)
    max=c;
    if(a<=b&&a<=c)
    min=a;
    else if(b<=a&&b<=c)
    min=b;
    else if(c<=a&&c<=b)
    min=c;
    printf("The largest number is %d and the smallest number is %d.",max,min);
}