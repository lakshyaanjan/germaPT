#include <stdio.h>

int main()

{
    printf("This is a calculator\n");
    char operator='\0';
    float n1=0.0f;
    float n2=0.0f;
    float n3=0.0f;

    printf("\nEnter number 1: ");
    scanf("%f", &n1);

    printf("\nEnter one of the following functions: (+,-,* or /): ");
    scanf(" %c", &operator);

    printf("\nEnter number 2: ");
    scanf("%f", &n2);


    switch(operator)
    {
        case '+':
            n3=n1+n2;
             printf ("Your output is: %.2f", n3);
            break;
        case '-':
            n3=n1-n2;
             printf ("Your output is: %.2f", n3);
            break;
        case '*':
            n3=n1*n2;
             printf ("Your output is: %.2f", n3);
            break;
        case'/':
            n3=n1/n2;
             printf ("Your output is: %.2f", n3);
            break;
        default:
            printf("Wrong operator ");
    }
   
}