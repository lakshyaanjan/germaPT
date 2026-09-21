#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    int i=0;
    for(int c=0;str[c]!='\0';c++)
    {
        i++;
    }
    char newstr[i];
    for(int j=0;j<i;j++)
    {
        newstr[i-1-j]=str[j];
    }
    newstr[i]='\0';
    printf("%s",newstr);
}