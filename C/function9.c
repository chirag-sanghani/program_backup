//Local variable
//Result with Local variable using function

#include<stdio.h>
void result(int a, int b, int c, int total, float per)
{
    printf("------------------------------------\n");
    printf("Maths\tsci\tEng\tTotal\tper\tGrade");
    printf("\n%d\t%d\t%d\t%d\t%.2f",a,b,c,total,per);
    if(per<35 || a<35 || b<35 || c<35)
    {
        printf("\tFail");
    }
    else if(per>=85)
    {
        printf("\tGrade A");
    }  
    else if (per>=70 && per<85)
    {
        printf("\tGrade B");
    }
    else if (per>=55 && per<70)
    {
        printf("\tGrade C");
    }
    else if (per>=35 && per<55)
    {
        printf("\tGrade D");
    }
}
void calc(int a, int b, int c)
{
    int total;
    float per;
    total=a+b+c;
    per=(float)total/3;
    result(a,b,c,total,per);
}
void setdata()
{
    int a,b,c;
    printf("Enter maths : ");
    scanf("%d",&a);
    printf("Enter sci : ");
    scanf("%d",&b);
    printf("Enter english : ");
    scanf("%d",&c);
    calc(a,b,c);    
}
int main()
{
    setdata();
}