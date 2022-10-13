//Invoice (Bill) in structure using Array...

#include<stdio.h>
#include<string.h>
struct invoice
{
    int no, rate, qty;
    char name[50];
    float amount, discount, billamt, gst, netbill;
};
int main()
{
    struct invoice b[5];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter no: ");
        scanf("%d",&b[i].no);
        printf("Enter name: ");
        scanf("%s",&b[i].name);
        printf("Enter rate: ");
        scanf("%d",&b[i].rate);
        printf("Enter qty: ");
        scanf("%d",&b[i].qty);
    }
    printf("-----------------------------------------------------------------------\n");
    printf("                          STORE INVOICE\n");
    printf("-----------------------------------------------------------------------");
    printf("\nNo\tName\tRate\tQty\tAmount\tDis\tBillAmt\tGST\tNetBill");
    printf("\n-----------------------------------------------------------------------");
    for(i=0;i<3;i++)
    {
        b[i].amount = b[i].rate * b[i].qty;
        b[i].discount = b[i].amount * 5 / 100;
        b[i].billamt = b[i].amount - b[i].discount;
        b[i].gst = b[i].billamt * 18 / 100;
        b[i].netbill = b[i].billamt + b[i].gst;
        printf("\n%d\t%s\t%d\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",b[i].no,b[i].name,b[i].rate,b[i].qty,b[i].amount,b[i].discount,b[i].billamt,b[i].gst,b[i].netbill);
    }
    printf("\n-----------------------------------------------------------------------");
    printf("\n                     THANKS...VISIT AGAIN......");
    printf("\n-----------------------------------------------------------------------");
}