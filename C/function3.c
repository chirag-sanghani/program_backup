//Function -> 3. With argument No return type
#include<stdio.h>
void dosum(int a, int b)
{
    printf("Sum is : %d",a+b);
}
int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    dosum(a,b);  //pass argument
}