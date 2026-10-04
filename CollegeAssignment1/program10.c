#include <Stdio.h>
int isPrime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else return 0;
}
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int a=2;
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<=i;j++)
        {
                    
        while(!isPrime(a))
        {
            a++;
        }
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}