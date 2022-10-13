// ternory operator -> conditional operator ?:
// condition ? true : false

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    //a>b ? printf("Larger number is %d",a) : printf("Larger number is %d",b);
    printf("Larger number is : %d",a>b ? a:b);
}
