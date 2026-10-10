#include<stdio.h>
#include<conio.h>

#define Bcnt 7

void AcceptBills(int *Bptr);
void DisplayBills(int *Bptr);
int BillSum(int *Bptr);

int main()
{
    int i = 0;
    int Bills [Bcnt];

    printf("\n Enter All Bills =>  ");
    printf("\n\n");

    AcceptBills(Bills);

    printf("\n Display All Entered Bills => \n ");
    DisplayBills(Bills);

    printf("\n The Sum of All Entered Bills are => %d",BillSum(Bills));

    getch();
    return 0;
}

void AcceptBills(int *Bptr)
{
    int i = 0;

    for(i = 0; i < Bcnt; i++)
    {
        printf("\n Enter %d bill =>  ",i+1);
        scanf("%d",&Bptr[i]);
    }
}

void DisplayBills(int *Bptr)
{
    int i = 0;

    for(i = 0; i < Bcnt; i++)
    {
        printf("\n Bill %d = %d \n ",i+1,Bptr[i]);
    }
}

int BillSum(int *Bptr)
{
    int i = 0 , sum = 0;

    for(i = 0; i < Bcnt; i++)
    {
        sum = sum + Bptr[i];
    }
    return sum;
}
