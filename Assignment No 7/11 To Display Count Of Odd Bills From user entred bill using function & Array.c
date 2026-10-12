#include<stdio.h>
#include<conio.h>

void AcceptBills(int *Optr);
void DisplayBills(int *Optr);
int OddBill(int *Optr);

#define OCnt 7

int main()
{
    int i = 0;
    int Bills [OCnt];

    printf("\n Enter All Bills =>  ");
    printf("\n\n");

    AcceptBills(Bills);

    printf("\n Display All Entered Bills => \n ");

    DisplayBills(Bills);

    printf("\n Odd Bill Count from all entered bill is => %d",OddBill(Bills));

    getch();
    return 0;
}

void AcceptBills(int *Optr)
{
    int i = 0;

    for(i = 0; i < OCnt; i++)
    {
        printf("\n Enter %d bill =>  ",i+1);
        scanf("%d",&Optr[i]);
    }
}

void DisplayBills(int *Optr)
{
    int i = 0;

    for(i = 0; i < OCnt; i++)
    {
        printf("\n Bill %d = %d \n ",i+1,Optr[i]);
    }
}

int OddBill(int *Optr)
{
    int i = 0 , OddBill = 0;

    for(i = 0; i < OCnt; i++)
    {
        if(Optr[i] % 2 == 1)
        {
            OddBill++;
        }
    }
    return OddBill;
}
