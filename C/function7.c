/*Write a c language function to convert an amount to Indian currency.
Function -> Indian currency -> With argument No return type*/

#include<stdio.h>
int convert(int n)
{
    int rup[]={2000,1000,500,200,100,50,20,10,5,2,1};
    int a,b=0;
    for(int i=0;i<10;i++)
    {
        if(n>rup[i])
        {
            a = n / rup[i];
            b = b + a;
            printf("  %d : %d",rup[i],b);
            n = n % rup[i];
            b = b - a;
        }
    }
}
int main()
{
    int n;
    printf("Enter Amount : ");
    scanf("%d",&n);
    convert(n);
}