/*Write a program function that reverse a number.
Example : x = 12345
 output : x = 54321
Function -> Reverse Number -> With argument With return type*/

#include<stdio.h>
int revnum(int n)
{
    int b=0,r;
    while(n!=0)
    {
        r = n % 10;
        b = b * 10 + r;
        n = n / 10;
    }
    return b;
}
int main()
{
    int n,a;
    printf("Enter number : ");
    scanf("%d",&n);
    a = revnum(n);
    printf("Reverse number is : %d",a);
}