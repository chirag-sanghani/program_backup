//Global variable
//Result with Global variable using function

#include<stdio.h>
int a,b,c,total;    //global variable
float per;
void setdata()
{
    printf("Enter maths : ");
    scanf("%d",&a);
    printf("Enter sci : ");
    scanf("%d",&b);
    printf("Enter english : ");
    scanf("%d",&c);
}
void calc()
{
    total=a+b+c;
    per=(float)total/3;
}
void result()
{
    printf("------------------------------------\n");
    printf("Maths\tsci\tEng\tTotal\tper");
    printf("\n%d\t%d\t%d\t%d\t%.2f",a,b,c,total,per);
}
int main()
{
    setdata();
    calc();
    result();
}