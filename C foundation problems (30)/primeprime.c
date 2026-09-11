#include <stdio.h>
int check(int x);
int main()
{
    printf("Enter the number upto which PRIMability is to be checked: ");
    int x;
    scanf("%d",&x);
    int c=0;
    int j;
    for(int i=1;i<=x;i++)
    {
        j=check(i);
        if(j==1)
        printf("%d ",i);
    }

}
int check(int x)
{
    int c=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else
    return 0;
}
