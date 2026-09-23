#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int c=0;
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
       {
        c++;
        if(i>0&&str[i-1]==' ')
        c--;
       } 

    }
    printf("The number of words are %d.",c+1);
}