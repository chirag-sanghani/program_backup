//Function -> 1. No argument No return type
#include<stdio.h>
void dosum()
{
    int a,b,sum;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    sum=a+b;
    printf("Sum is : %d\n",sum);
}
int main()
{
    dosum();
}