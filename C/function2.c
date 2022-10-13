//Function -> 2. No argument With return type
#include<stdio.h>
int dosum()
{
    int a,b,sum;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    return a+b;
}
int main()
{
    int a=dosum();
    printf("Sum is : %d\n",a);
}