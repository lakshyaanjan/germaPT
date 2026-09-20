#include <stdio.h>
int main()
{

    char str[100];
    int c=0,u=0,l=0;
    printf("Enter the string: ");
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<=90)
        u++;
        else if(str[i]>=97&&str[i]<=122)
        l++;
    }
    printf("Uppercase letters are %d while Lowercase letters are %d.",u,l);
}