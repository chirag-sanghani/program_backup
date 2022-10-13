//Recursive function -> automatically called by itself
//Recursive number :- 5! = 5*4*3*2*1 = 120

#include<stdio.h>
int fact(int a)
{
    if(a==1)
        return 1;
    else
        return a*fact(a-1);
}
int main()
{
    int n,f;
    printf("Enter number : ");
    scanf("%d",&n);
    f=fact(n);
    printf("Given number factorial is : %d",f);
}