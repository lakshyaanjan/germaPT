#include <stdio.h>
int recur(int x)
{
    if(x==1)
    return 0;
    else if(x==2)
    return 1;
    else
    return recur(x-1) + recur(x-2);
}
int main()
{
    printf("Enter the total fibonacci terms number: ");
    int n;
    int c;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        c=recur(i);
        printf("%d ",c);
    }
}