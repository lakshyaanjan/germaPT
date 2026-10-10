#include <stdio.h>

int main()
{
    //this program converts fahrenheit to celcius 
    int c=0,f=0;
    printf("Fahrenheit\tCelcius\n");
    printf("         1\t-17\n");
    for(int i=20;i<=200;i+=20)
    {
        printf("%10d\t",i);
        c=(5)*(i-32)/9;
        printf("%d\n",c);
    }
}