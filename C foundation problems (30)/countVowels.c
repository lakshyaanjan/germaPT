#include <stdio.h>
int main()
{
    char str[100];
    int c=0;
    printf("Enter the string: ");
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        c++;
    }
    printf("The number of vowels is %d.",c);
}