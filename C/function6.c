/*Write a c language function which says weather a number is perfact or not.
Example : 6 is divide by 1,2,3 and their sum is 1+2+3=6, hence 6 is perfect number.
          28 is divide by 1,2,4,7,14 and their sum is 1+2+4+7+14=28, hence 28 is perfect number.
Function -> Perfact Number -> With argument With return type*/

#include<stdio.h>
int perfect(int n)
{
    int k=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            k=k+i;
    }
    return k;
}
int main()
{
    int n,a;
    printf("Enter number : ");
    scanf("%d",&n);
    a=perfect(n);
    if(n==a)
        printf("%d is perfect number.",n);
    else
        printf("%d is not perfect number.",n);
}