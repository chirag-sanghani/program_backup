//Function -> 4. With argument With return type
#include<stdio.h>
int dosum(int a, int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    int x=dosum(a,b);    //pass argument
    printf("Sum is : %d",x);
}