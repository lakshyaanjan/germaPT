#include <Stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float percent;
    char grade;
    printf("Enter the marks of subject 1: ");
    scanf("%d",&a);
    printf("Enter the marks of subject 2: ");
    scanf("%d",&b);
    printf("Enter the marks of subject 3: ");
    scanf("%d",&c);
    printf("Enter the marks of subject 4: ");
    scanf("%d",&d);
    printf("Enter the marks of subject 5: ");
    scanf("%d",&e);
        if((a<=100&&a>=0)&&(b<=100&&b>=0)&&(c<=100&&c>=0)&&(d<=100&&d>=0)&&(e<=100&&e>=0))
    {
    total=a+b+c+d+e;
    percent=(float)total/5;
    printf("Total marks: %d\n",total);
    printf("Percentage: %.2f\n",percent);
    if(percent>=90.0)
    printf("The grade is A+");
    else if(percent<90&&percent>=80)
    printf("The grade is A");
    else if(percent<80&&percent>=70)
    printf("The grade is B");
    else if(percent<70&&percent>=60)
    printf("The grade is C");
    else if(percent<60&&percent>=50)
    printf("The grade is D");
    else
    printf("The grade is F");
    }
    else printf("Invalid Marks.");
}